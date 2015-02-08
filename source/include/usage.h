/*
** usage.h for strace in /home/chauvi_n/rendu/SUA_2013_strace/source/include
**
** Made by Nicolas Chauvin
** Login   <chauvi_n@epitech.net>
**
** Started on  Wed Apr 30 22:17:58 2014 Nicolas Chauvin
** Last update Sun May 18 23:17:09 2014 Nicolas Chauvin
*/

#ifndef		USAGE_H_
# define	USAGE_H_

# include <sys/types.h>
# include <stdbool.h>

# define ARG_PID	"-p"
# define BAD_USAGE	"\nUsage :\t%s <command> [args] || <-p> <pid>\n\n"
# define BAD_PID	"Bad pid\n"

typedef struct	s_usg
{
  const char	**command;
  bool		attach;
  pid_t		pid;
}		t_usg;

bool	usage(int, char **, t_usg *);

#endif		/* !USAGE_H_ */
