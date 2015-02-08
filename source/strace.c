/*
** strace.c for strace in /home/chauvi_n/rendu/SUA_2013_strace/source
** 
** Made by Nicolas Chauvin
** Login   <chauvi_n@epitech.net>
** 
** Started on  Wed Apr 30 23:10:51 2014 Nicolas Chauvin
** Last update Sun May 18 23:31:59 2014 Nicolas Chauvin
*/

#include <sys/types.h>
#include <sys/ptrace.h>
#include <unistd.h>
#include <signal.h>
#include <stdio.h>
#include "signal_handlers.h"
#include "trace_syscall.h"
#include "p_error.h"
#include "usage.h"

static pid_t	launch_tracee(const char **command)
{
  pid_t		pid;

  pid = 0;
  if ((pid = fork()) == -1)
    p_error(FORK_ERR, -1);
  else if (!pid)
    {
      if ((ptrace(PTRACE_TRACEME, 0, NULL, NULL)) == -1)
	return (p_error(PTRACE_ERR, -1));
      execvp(command[0], (char * const*)command);
      return (p_error(EXECL_ERR, -1));
    }
  signal(SIGINT, sig_handler);
  signal(SIGTERM, sig_handler);
  return (pid);
}

static pid_t	attach_tracee(pid_t pid)
{
  signal(SIGINT, sig_handler);
  signal(SIGTERM, sig_handler);
  if ((ptrace(PTRACE_ATTACH, pid, NULL, NULL)) == -1)
    return (p_error(PTRACE_ERR, -1));
  return (pid);
}

int		strace(const t_usg *usage)
{
  pid_t		pid;

  pid = -1;
  if (usage->command)
    pid = launch_tracee(usage->command);
  else if (usage->attach)
    pid = attach_tracee(usage->pid);
  else
    fprintf(stderr, "Fatal unhandled error. Abort.\n");
  return (pid != -1 ? trace_syscall(pid) : pid);
}
