/*
** main.c for strace in /home/chauvi_n/rendu/SUA_2013_strace/source
** 
** Made by Nicolas Chauvin
** Login   <chauvi_n@epitech.net>
** 
** Started on  Wed Apr 30 18:49:49 2014 Nicolas Chauvin
** Last update Sun May 18 23:15:15 2014 Nicolas Chauvin
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
