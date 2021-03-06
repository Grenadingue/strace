/*
** print_interger2.c for strace in /home/chauvi_n/rendu/AUSP_strace/source
**
** Made by Nicolas Chauvin
** Email <chauvin.nico@gmail.com>
**
** Started on  Sun May 18 19:23:06 2014 Nicolas Chauvin
** Last update Wed Apr  8 23:02:26 2015 Nicolas Chauvin
*/

#include <stdbool.h>
#include <stdio.h>
#include "t_reg_value.h"

void		print_long(bool comma_flag, t_reg_value value)
{
  printf("%s%ld", comma_flag ? ", " : "", (long)value);
}

void		print_ulong(bool comma_flag, t_reg_value value)
{
  printf("%s%lu", comma_flag ? ", " : "", (unsigned long)value);
}

void		print_size_t(bool comma_flag, t_reg_value value)
{
  printf("%s%zu", comma_flag ? ", " : "", (size_t)value);
}

void		print_ssize_t(bool comma_flag, t_reg_value value)
{
  printf("%s%zd", comma_flag ? ", " : "", (ssize_t)value);
}
