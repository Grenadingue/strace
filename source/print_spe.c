/*
** print_spe.c for strace in /home/chauvi_n/rendu/AUSP_strace/source
**
** Made by Nicolas Chauvin
** Email <chauvin.nico@gmail.com>
**
** Started on  Sun May 18 19:23:06 2014 Nicolas Chauvin
** Last update Wed Apr  8 23:13:33 2015 Nicolas Chauvin
*/

#include <stdbool.h>
#include <stdio.h>
#include "t_reg_value.h"

void		print_void(bool comma_flag, t_reg_value value)
{
  (void)comma_flag;
  (void)value;
  printf("?");
}

void		print_va_arg(bool comma_flag, t_reg_value value)
{
  (void)value;
  printf("%s...", comma_flag ? ", " : "");
}

void		print_hexa(bool comma_flag, t_reg_value value)
{
  if (sizeof(t_reg_value) == sizeof(unsigned long long int))
    printf("%s0x%016llX", comma_flag ? ", " : "", (unsigned long long int)value);
  else
    printf("%s0x%016lX", comma_flag ? ", " : "", (unsigned long int)value);
}
