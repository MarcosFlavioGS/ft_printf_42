# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 05:31:15 by coder             #+#    #+#              #
#    Updated: 2022/10/11 05:47:20 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c

OBJ = ${SRC:.c=.o}

FLAGS = -Wall -Werror -Wextra

all: ${NAME}

${NAME}: ${OBJ}
	ar -rcs $@ ${OBJ}

${OBJ}: ${SRC}
	cc ${FLAGS} -c $@

clean: 
	@rm -f *.o

fclean: clean
	@rm -f ${NAME}

re: clean fclean all
