# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 16:41:54 by hznagui           #+#    #+#              #
#    Updated: 2022/11/12 20:23:21 by hznagui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAN_FILE = ft_putstr.c 	ft_putnbr.c ft_printf.c ft_putchar.c ft_strlen.c ft_put_uns_int.c\

NAME = libftprintf.a

OBJ_FILE = $(MAN_FILE:.c=.o)

$(NAME) : $(OBJ_FILE)
	ar -rc $(NAME) $(OBJ_FILE)
	
all : $(NAME)

%.o : %.c ft_printf.h
	cc -Wall -Werror -Wextra -c $< -o $@
	
clean :
	rm -f $(OBJ_FILE)

fclean : clean 
	rm -f $(NAME)

re: fclean $(NAME)