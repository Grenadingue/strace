/*
** p_error.c for strace in /home/chauvi_n/rendu/AUSP_strace/source
**
** Made by Nicolas Chauvin
** Email <chauvin.nico@gmail.com>
**
** Started on  Thu May 15 21:14:06 2014 Nicolas Chauvin
** Last update Wed Apr  8 20:25:55 2015 Nicolas Chauvin
*/

#include <errno.h>
#include <stdio.h>

int		p_error(char *err, int ret)
{
  fprintf(stderr, "Error %d : %s failure\n", errno, err);
  return (ret);
}
