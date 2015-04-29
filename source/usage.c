/*
** usage.c for strace in /home/chauvi_n/rendu/SUA_2013_strace/source
**
** Made by Nicolas Chauvin
** Email <chauvin.nico@gmail.com>
**
** Started on  Wed Apr 30 22:14:34 2014 Nicolas Chauvin
** Last update Wed Apr 29 22:30:39 2015 Nicolas Chauvin
*/

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "limits2.h"
#include "usage.h"

static bool	usage_cmd(char **command, t_usg *usage)
{
  // Tricky, memcpy() is used because t_usg::command is const
  memcpy(&(usage->command), &command, sizeof(char **));
  return (true);
}

static bool	usage_pid(const char *pid_str, t_usg *usage)
{
  int		i;

  i = 0;
  usage->attach = true;
  while (pid_str[i] && usage->attach && i != INT_MAX_STRLEN)
    {
      if (pid_str[i] < '0' || pid_str[i] > '9')
	usage->attach = false;
      ++i;
    }
  usage->pid = atoi(pid_str);
  if (usage->attach && (!i || usage->pid == -1))
    usage->attach = false;
  if (!usage->attach)
    fprintf(stderr, BAD_PID);
  return (usage->attach);
}

bool		usage(int ac, char **av, t_usg *usage)
{
  if (ac == 1)
    return (false);
  else if (ac == 3 && (strcmp(av[1], ARG_PID)) == 0)
    return (usage_pid(av[2], usage));
  else if (ac >= 2)
    return (usage_cmd(&av[1], usage));
  return (false);
}
