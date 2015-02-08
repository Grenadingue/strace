/*
** print_interger.c for strace in /home/chauvi_n/rendu/AUSP_strace/source
** 
** Made by Nicolas Chauvin
** Login   <chauvi_n@epitech.net>
** 
** Started on  Sun May 18 19:23:06 2014 Nicolas Chauvin
** Last update Sun May 18 21:08:30 2014 Nicolas Chauvin
*/

#include <inttypes.h>
#include <stdbool.h>
#include <stdio.h>

void		print_int(bool comma_flag, unsigned long int value)
{
  printf("%s%d", comma_flag ? ", " : "", (int)value);
}

void		print_uint(bool comma_flag, unsigned long int value)
{
  printf("%s%u", comma_flag ? ", " : "", (unsigned int)value);
}

void		print_uint32_t(bool comma_flag, unsigned long int value)
{
  printf("%s%"PRIu32"", comma_flag ? ", " : "", (uint32_t)value);
}

void		print_uint64_t(bool comma_flag, unsigned long int value)
{
  printf("%s%"PRIu64"", comma_flag ? ", " : "", (uint64_t)value);
}
