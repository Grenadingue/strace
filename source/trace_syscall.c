/*
** trace_syscall.c for strace in /home/chauvi_n/rendu/AUSP_strace/source
** 
** Made by Nicolas Chauvin
** Login   <chauvi_n@epitech.net>
** 
** Started on  Thu May 15 20:52:03 2014 Nicolas Chauvin
** Last update Mon May 19 00:03:05 2014 Nicolas Chauvin
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
#include "print_type.h"
#include "p_error.h"

pid_t				g_pid;
extern const t_syscall		g_syscall_x86_64[];
extern const t_print_type	g_print_type[];

void		print_syscall_ret(unsigned long int syscall, long ret,
				  bool *ret_flag)
{
  *ret_flag = false;
  printf(" = ");
  (*g_print_type[g_syscall_x86_64[syscall].ret])(false, ret);
  printf("\n");
}

unsigned long int	print_syscall(struct user_regs_struct *regs,
				      bool *ret_flag)
{
  unsigned long int	*arg;
  int			i;

  i = 0;
  *ret_flag = true;
  arg = &(regs->rdi);
  printf("%s(", g_syscall_x86_64[regs->rax].name);
  while (g_syscall_x86_64[regs->rax].args[i] && i != 6)
    {
      (*g_print_type[g_syscall_x86_64[regs->rax].args[i]])
	(i ? true : false, *arg);
      --arg;
      ++i;
    }
  printf(")");
  return (regs->rax);
}

int				trace_syscall(pid_t pid)
{
  struct user_regs_struct	regs;
  unsigned long	int		syscall;
  u_short			ins;
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
	syscall = print_syscall(&regs, &ret_flag);
    }
  ptrace(PTRACE_DETACH, pid, NULL, NULL);
  return (0);
}
