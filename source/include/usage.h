/*
** usage.h for strace in /home/chauvi_n/rendu/SUA_2013_strace/source/include
**
** Made by Nicolas Chauvin
** Email <chauvin.nico@gmail.com>
**
** Started on  Wed Apr 30 22:17:58 2014 Nicolas Chauvin
** Last update Tue Apr 28 00:24:43 2015 Nicolas Chauvin
*/

#ifndef		USAGE_H_
# define	USAGE_H_

# include <sys/types.h>
# include <stdbool.h>

# define ARG_PID	"-p"
# define BAD_USAGE	"\nUsage :\t%s <command> [args] || <-p> <pid>\n\n"
# define BAD_PID	"Error :\tBad pid\n"

typedef struct	s_usg
{
  const char	**command;
  bool		attach;
  pid_t		pid;
}		t_usg;

bool	usage(int, char **, t_usg *);

#endif		/* !USAGE_H_ */
