/*
** t_reg_value.h for strace in /home/chauvi_n/TAF/perso/chauv.in/git/strace/source
**
** Made by Nicolas Chauvin
** Email <chauvin.nico@gmail.com>
**
** Started on  Wed Apr  8 22:01:44 2015 Nicolas Chauvin
** Last update Wed Apr  8 22:16:05 2015 Nicolas Chauvin
*/

#ifndef		T_REG_VALUE_H_
# define	T_REG_VALUE_H_

# include <sys/user.h>

typedef typeof(((struct user_regs_struct *)0)->orig_rax) t_reg_value;

#endif		/* !T_REG_VALUE_H_ */
