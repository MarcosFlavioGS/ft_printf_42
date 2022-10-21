# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mflavio- <mfghost69@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/21 03:13:22 by mflavio-          #+#    #+#              #
#    Updated: 2022/10/21 03:13:29 by mflavio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c

OBJ = ${SRC:.c=.o}

FLAGS = -Wall -Werror -Wextra

all: ${NAME}

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
