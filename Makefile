# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coder <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 05:31:15 by coder             #+#    #+#              #
#    Updated: 2022/10/12 15:30:02 by coder            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c

OBJ = ${SRC:.c=.o}

FLAGS = -Wall -Werror -Wextra

all: ${NAME}

test:
	cc ${FLAGS} -o printf main.c ${SRC} libft/libft.a

${NAME}: ${OBJ}
	make -C libft
	mv libft/libft.a ${NAME}
	ar -rcs $@ ${OBJ}

${OBJ}: libft ${SRC}
	cc ${FLAGS} -c ${SRC}

clean: 
	rm -f *.o

fclean: clean
	rm -f ${NAME}

re: clean fclean all
