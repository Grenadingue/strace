/*
** trace_syscall.c for strace in /home/chauvi_n/rendu/AUSP_strace/source
**
** Made by Nicolas Chauvin
** Email <chauvin.nico@gmail.com>
**
** Started on  Thu May 15 20:52:03 2014 Nicolas Chauvin
** Last update Mon Apr 27 23:20:51 2015 Nicolas Chauvin
*/

#include <sys/types.h>
#include <sys/ptrace.h>
#include <sys/wait.h>
#include <sys/user.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include "t_syscall.h"
#include "t_reg_value.h"
#include "print_type.h"
#include "p_error.h"

pid_t				g_pid;
extern const t_syscall		g_syscall_x86_64[];
extern const t_print_type	g_print_type[];

void		print_syscall_ret(t_reg_value syscall, t_reg_value ret, bool *ret_flag)
{
  *ret_flag = false;
  printf(" = ");
  (*g_print_type[g_syscall_x86_64[syscall].ret])(false, ret);
  printf("\n");
}

void		print_syscall(struct user_regs_struct *regs, bool *ret_flag)
{
  t_reg_value	*arg;
  int		i;

  i = 0;
  *ret_flag = true;
  arg = &(regs->rdi);
  printf("%s(", g_syscall_x86_64[regs->rax].name);
  while (g_syscall_x86_64[regs->rax].args[i] && i != 6)
    {
      (*g_print_type[g_syscall_x86_64[regs->rax].args[i]])(i ? true : false, *arg);
      --arg;
      ++i;
    }
  printf(")");
}

int				trace_syscall(pid_t pid)
{
  struct user_regs_struct	regs;
  t_reg_value			syscall;
  ushort			ins;
  bool				ret_flag;
  int				status;

  status = 1;
  ret_flag = false;
  g_pid = pid;
  wait4(pid, &status, 0, NULL);
  while (!WIFEXITED(status))
    {
      bzero(&regs, sizeof(struct user_regs_struct));
      if ((ptrace(PTRACE_SINGLESTEP, pid, NULL, NULL)) != 0)
  	perror("ptrace");
      wait4(pid, &status, 0, NULL);
      ptrace(PTRACE_GETREGS, pid, NULL, &regs);
      if (ret_flag)
	print_syscall_ret(syscall, regs.rax, &ret_flag);
      ins = ptrace(PTRACE_PEEKTEXT, pid, regs.rip, NULL);
      if (ins == 0x80CD || ins == 0x050F || ins == 0x340F)
	{
	  print_syscall(&regs, &ret_flag);
	  syscall = regs.rax;
	}
    }
  ptrace(PTRACE_DETACH, pid, NULL, NULL);
  return (0);
}
