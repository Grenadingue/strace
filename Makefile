##
## Makefile for strace in /home/chauvi_n/rendu/SUA_2013_strace
##
## Made by Nicolas Chauvin
## Email <chauvin.nico@gmail.com>
##
## Started on  Wed Apr 30 18:43:54 2014 Nicolas Chauvin
## Last update Wed Apr  8 20:30:02 2015 Nicolas Chauvin
##

#
## commands name
CC		=	gcc

RM		=	rm -f

#
## binary's name
NAME		=	strace

#
## project paths
SOURCE		=	source/

INCLUDE		=	$(SOURCE)include

#
## project C source code
SRCS		=	$(SOURCE)main.c			\
			$(SOURCE)p_error.c		\
			$(SOURCE)usage.c		\
			$(SOURCE)signal_handlers.c	\
			$(SOURCE)strace.c		\
			$(SOURCE)syscall_x86_64.c	\
			$(SOURCE)trace_syscall.c	\
			$(SOURCE)print_type.c		\
			$(SOURCE)print_integer.c	\
			$(SOURCE)print_integer2.c	\
			$(SOURCE)print_chars.c		\
			$(SOURCE)print_spe.c


#
## project object code
OBJS		=	$(SRCS:.c=.o)

#
## compilation flags
CFLAGS		+=	-W -Wall -Wextra #-Werror
CFLAGS		+=	-I $(INCLUDE)
#CFLAGS		+=	-ggdb


all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME) $(CFLAGS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
