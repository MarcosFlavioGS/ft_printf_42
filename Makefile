# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mflavio- <mfghost69@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 05:31:15 by coder             #+#    #+#              #
#    Updated: 2022/10/19 02:26:01 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c

OBJ = ${SRC:.c=.o}

FLAGS = -Wall -Werror -Wextra

all: ${NAME}

test: all
	@cc ${FLAGS} -o test main.c ${SRC} ${NAME}
	@make fclean -C libft/
	@make fclean
	@clear
	@./test

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
