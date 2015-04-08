/*
** print_type.h for strace in /home/chauvi_n/rendu/AUSP_strace/source/include
**
** Made by Nicolas Chauvin
** Email <chauvin.nico@gmail.com>
**
** Started on  Sun May 18 19:42:07 2014 Nicolas Chauvin
** Last update Wed Apr  8 23:01:34 2015 Nicolas Chauvin
*/

#ifndef		PRINT_TYPE_H_
# define	PRINT_TYPE_H_

# include "t_reg_value.h"

typedef void	(*t_print_type)(bool, t_reg_value);

void		print_void(bool, t_reg_value);
void		print_va_arg(bool, t_reg_value);
void		print_hexa(bool, t_reg_value);
void		print_int(bool, t_reg_value);
void		print_uint(bool, t_reg_value);
void		print_uint32_t(bool, t_reg_value);
void		print_uint64_t(bool, t_reg_value);
void		print_long(bool, t_reg_value);
void		print_ulong(bool, t_reg_value);
void		print_size_t(bool, t_reg_value);
void		print_ssize_t(bool, t_reg_value);
void		print_char(bool, t_reg_value);
void		print_string(bool, t_reg_value);

#endif		/* !PRINT_TYPE_H_ */
