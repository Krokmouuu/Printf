# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bleroy <bleroy@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/02 15:59:24 by bleroy            #+#    #+#              #
#    Updated: 2021/11/15 13:12:48 by bleroy           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_c.c \
	   ft_check.c \
	   ft_d.c \
	   ft_p.c \
	   ft_printf.c \
	   ft_s.c \
	   ft_u.c \
	   ft_x.c \
	   ft_pourcentage.c \

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

CC = gcc

RM = rm -f

CFLAGS = -Wall -Werror -Wextra

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		ar rc ${NAME} ${OBJS}
	
all: ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re