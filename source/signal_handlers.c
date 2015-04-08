/*
** signal_handlers.c for strace in /home/chauvi_n/rendu/AUSP_strace/source
**
** Made by Nicolas Chauvin
** Email <chauvin.nico@gmail.com>
**
** Started on  Sun May 18 23:21:46 2014 Nicolas Chauvin
** Last update Wed Apr  8 20:26:05 2015 Nicolas Chauvin
*/

#include <sys/types.h>
#include <sys/ptrace.h>
#include <stdlib.h>

extern pid_t		g_pid;

void            sig_handler(int sig)
{
  (void)sig;
  ptrace(PTRACE_DETACH, g_pid, NULL, NULL);
  exit(0);
}
