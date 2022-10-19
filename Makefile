# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile1                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mflavio- <mfghost69@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 05:31:15 by coder             #+#    #+#              #
#    Updated: 2022/10/19 00:55:13 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c

OBJ = ${SRC:.c=.o}

FLAGS = -Wall -Werror -Wextra

all: ${NAME}

test: all
	cc ${FLAGS} -o printf main.c ${SRC} ${NAME}
	rm -f libft/*.o
	rm -f *.o

${NAME}: ${OBJ}
	make -C libft
	mv libft/libft.a ${NAME}
	ar -rcs $@ ${OBJ}

${OBJ}: ${SRC}
	cc ${FLAGS} -c ${SRC}

clean: 
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: clean fclean all
