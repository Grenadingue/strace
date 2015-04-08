/*
** p_error.h for strace in /home/chauvi_n/rendu/AUSP_strace/source/include
**
** Made by Nicolas Chauvin
** Email <chauvin.nico@gmail.com>
**
** Started on  Thu May 15 21:13:25 2014 Nicolas Chauvin
** Last update Wed Apr  8 20:27:25 2015 Nicolas Chauvin
*/

#ifndef		P_ERROR_H_
# define	P_ERROR_H_

# define BRACKETS	"()"
# define FORK_ERR	"fork"
# define EXECL_ERR	"execl"
# define PTRACE_ERR	"ptrace"

int	p_error(char *, int);

#endif		/* !P_ERROR_H_ */
