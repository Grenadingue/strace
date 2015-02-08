/*
** p_error.h for strace in /home/chauvi_n/rendu/AUSP_strace/source/include
**
** Made by Nicolas Chauvin
** Login   <chauvi_n@epitech.net>
**
** Started on  Thu May 15 21:13:25 2014 Nicolas Chauvin
** Last update Thu May 15 21:17:52 2014 Nicolas Chauvin
*/

#ifndef		P_ERROR_H_
# define	P_ERROR_H_

# define BRACKETS	"()"
# define FORK_ERR	"fork"
# define EXECL_ERR	"execl"
# define PTRACE_ERR	"ptrace"

int	p_error(char *, int);

#endif		/* !P_ERROR_H_ */
