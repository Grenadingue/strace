/*
** print_type.h for strace in /home/chauvi_n/rendu/AUSP_strace/source/include
**
** Made by Nicolas Chauvin
** Email <chauvin.nico@gmail.com>
**
** Started on  Sun May 18 19:42:07 2014 Nicolas Chauvin
** Last update Wed Apr  8 20:27:20 2015 Nicolas Chauvin
*/

#ifndef		PRINT_TYPE_H_
# define	PRINT_TYPE_H_

typedef void	(*t_print_type)(bool, unsigned long int);

void		print_void(bool, unsigned long int);
void		print_va_arg(bool, unsigned long int);
void		print_hexa(bool, unsigned long int);
void		print_int(bool, unsigned long int);
void		print_uint(bool, unsigned long int);
void		print_uint32_t(bool, unsigned long int);
void		print_uint64_t(bool, unsigned long int);
void		print_long(bool, unsigned long int);
void		print_ulong(bool, unsigned long int);
void		print_size_t(bool, unsigned long int);
void		print_ssize_t(bool, unsigned long int);
void		print_char(bool, unsigned long int);
void		print_string(bool, unsigned long int);

#endif		/* !PRINT_TYPE_H_ */
