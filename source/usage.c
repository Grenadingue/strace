/*
** usage.c for strace in /home/chauvi_n/rendu/SUA_2013_strace/source
** 
** Made by Nicolas Chauvin
** Login   <chauvi_n@epitech.net>
** 
** Started on  Wed Apr 30 22:14:34 2014 Nicolas Chauvin
** Last update Sun May 18 22:58:25 2014 Nicolas Chauvin
*/

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include <stdio.h>
#include "usage.h"

static bool	usage_cmd(char **command, t_usg *usage)
{
  memcpy(&(usage->command), &command, sizeof(char **));
  return (true);
}

static bool	usage_pid(const char *pid_str, t_usg *usage)
{
  int		i;
  bool		ret;
  char		buf[32];

  i = 0;
  ret = true;
  bzero(buf, sizeof(buf));
  usage->attach = true;
  usage->pid = atoi(pid_str);
  while (pid_str[i])
    {
      ret = (pid_str[i] < '0' || pid_str[i] > '9' ? false : ret);
      ++i;
    }
  if (ret)
    {
      snprintf(buf, sizeof(buf), "%d", usage->pid);
      ret = (buf[0] == '-' || !i ? false : ret);
    }
  if (!ret)
    fprintf(stderr, BAD_PID);
  return (ret);
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
