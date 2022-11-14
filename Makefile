# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 16:41:54 by hznagui           #+#    #+#              #
#    Updated: 2022/11/14 20:05:56 by hznagui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAN_FILE = ft_putstr.c 	ft_putnbr.c ft_printf.c ft_putchar.c ft_put_uns_int.c ft_ptr.c ft_hexdecimal.c ft_heXadecimal.c\

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