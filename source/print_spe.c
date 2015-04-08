/*
** print_spe.c for strace in /home/chauvi_n/rendu/AUSP_strace/source
**
** Made by Nicolas Chauvin
** Email <chauvin.nico@gmail.com>
**
** Started on  Sun May 18 19:23:06 2014 Nicolas Chauvin
** Last update Wed Apr  8 20:26:01 2015 Nicolas Chauvin
*/

#include <stdbool.h>
#include <stdio.h>

void		print_void(bool comma_flag, unsigned long int value)
{
  (void)comma_flag;
  (void)value;
  printf("?");
}

void		print_va_arg(bool comma_flag, unsigned long int value)
{
  (void)value;
  printf("%s...", comma_flag ? ", " : "");
}

void		print_hexa(bool comma_flag, unsigned long int value)
{
  printf("%s0x%016lX", comma_flag ? ", " : "", value);
}
