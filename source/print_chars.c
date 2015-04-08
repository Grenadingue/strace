/*
** print_chars.c for strace in /home/chauvi_n/rendu/AUSP_strace/source
**
** Made by Nicolas Chauvin
** Email <chauvin.nico@gmail.com>
**
** Started on  Sun May 18 19:23:06 2014 Nicolas Chauvin
** Last update Wed Apr  8 23:03:39 2015 Nicolas Chauvin
*/

#include <sys/types.h>
#include <sys/ptrace.h>
#include <stdbool.h>
#include <stdio.h>
#include "t_reg_value.h"

typedef union	u_getstr
{
  t_reg_value	var;
  char		str[sizeof(t_reg_value) + 1];
}		t_getstr;

extern pid_t		g_pid;

static void		set_end_flag(bool *end, t_getstr *getstr)
{
  int			i;

  i = 0;
  while (i != sizeof(t_reg_value))
    *end = (!getstr->str[i++] ? true : *end);
}

static void		print_str(t_getstr *getstr)
{
  int			i;

  i = 0;
  while (getstr->str[i])
    {
      if (getstr->str[i] == '\n')
	printf("\\n");
      else
	printf("%c", getstr->str[i]);
      ++i;
    }
}

void		print_string(bool comma_flag, t_reg_value value)
{
  t_getstr	getstr;
  bool		end;

  end = false;
  getstr.str[sizeof(t_reg_value)] = 0;
  printf("%s\"", comma_flag ? ", " : "");
  while (!end)
    {
      getstr.var = ptrace(PTRACE_PEEKTEXT, g_pid, value, NULL);
      print_str(&getstr);
      value += sizeof(t_reg_value);
      set_end_flag(&end, &getstr);
    }
  printf("\"");
}

void		print_char(bool comma_flag, t_reg_value value)
{
  printf("%s%c", comma_flag ? ", " : "", (char)value);
}
