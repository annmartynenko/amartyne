#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amartyne <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/03/23 20:02:41 by amartyne          #+#    #+#              #
#    Updated: 2018/03/24 11:01:57 by amartyne         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
srcs/ft_swap.c
HDR = includes/*.h

all:
	gcc -c $(SRC) -I $(HDR)
	ar rc $(NAME) *.o
	ranlib $(NAME)
clean:
	rm -f *.o
fclean: clean
	rm -f $(NAME)
re: fclean
	make