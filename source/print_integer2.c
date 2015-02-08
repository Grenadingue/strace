/*
** print_interger2.c for strace in /home/chauvi_n/rendu/AUSP_strace/source
** 
** Made by Nicolas Chauvin
** Login   <chauvi_n@epitech.net>
** 
** Started on  Sun May 18 19:23:06 2014 Nicolas Chauvin
** Last update Sun May 18 21:02:41 2014 Nicolas Chauvin
*/

#include <stdbool.h>
#include <stdio.h>

void		print_long(bool comma_flag, unsigned long int value)
{
  printf("%s%ld", comma_flag ? ", " : "", (long)value);
}

void		print_ulong(bool comma_flag, unsigned long int value)
{
  printf("%s%lu", comma_flag ? ", " : "", value);
}

void		print_size_t(bool comma_flag, unsigned long int value)
{
  printf("%s%zu", comma_flag ? ", " : "", (size_t)value);
}

void		print_ssize_t(bool comma_flag, unsigned long int value)
{
  printf("%s%zd", comma_flag ? ", " : "", (ssize_t)value);
}
