/*
** main.c for strace in /home/chauvi_n/rendu/SUA_2013_strace/source
**
** Made by Nicolas Chauvin
** Email <chauvin.nico@gmail.com>
**
** Started on  Wed Apr 30 18:49:49 2014 Nicolas Chauvin
** Last update Wed Apr  8 20:25:50 2015 Nicolas Chauvin
*/

#include <strings.h>
#include <stdio.h>
#include "usage.h"
#include "strace.h"

int		main(int ac, char **av)
{
  t_usg		usg;

  bzero(&usg, sizeof(t_usg));
  if (!usage(ac, av, &usg))
    {
      fprintf(stderr, BAD_USAGE, av[0]);
      return (-1);
    }
  return (strace(&usg));
}
