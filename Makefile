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
CC=gcc
FLAGS=-Wall -Wextra -Werror
RM=rm -f
LIB_PATH = libft/
SRCS =	ft_printf.c \
		sources/ft_print_c.c \
		sources/ft_print_s.c \
		sources/ft_print_d.c \
		sources/ft_print_p.c \
		sources/ft_print_x.c \
		sources/ft_print_xx.c 
				
OBJ=$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
				$(MAKE) -C $(LIB_PATH)
				cp $(LIB_PATH)libft.a $(NAME)
				ar rc $(NAME) $(OBJ)
%.o: %.c 
				$(CC) $(FLAGS) -o $@ -c $^

clean:
				$(RM) $(OBJ)
				$(MAKE) clean -C $(LIB_PATH)

fclean: clean 
				$(RM) $(NAME)
				$(MAKE) fclean -C $(LIB_PATH)

re: fclean all

.PHONY: clean fclean all re
