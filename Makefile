# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gbertin <gbertin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/09 08:20:36 by gbertin           #+#    #+#              #
#    Updated: 2021/12/09 23:04:28 by gbertin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC=clang
FLAGS=-Wall -Wextra -Werror
RM=rm -f
SRCS =	ft_printf.c \
		ft_print_c.c \
				
OBJ=$(SRC:.c=.o)

$(NAME): $(OBJ)
				ar rc $(NAME) $(OBJ)
				ranlib $(NAME)
%.o: %.c 
				$(CC) -I. -o $@ -c $? $(FLAGS)

all: $(NAME)

clean:
				$(RM) $(OBJ)

fclean: clean 
				$(RM) $(NAME)

re: fclean all

.PHONY: clean
