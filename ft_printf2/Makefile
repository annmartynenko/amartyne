#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amartyne <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/18 12:02:58 by amartyne          #+#    #+#              #
#    Updated: 2018/09/12 19:08:05 by amartyne         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_printf

SRC = ft_printf.c main.c number.c ft_itoa_base.c ft_putunsnbr.c extra_fun.c \
unicode.c find_flag.c for_flags.c

FLAGS = -Wall -Wextra -Werror

HDR = ft_printf.h

all: $(NAME)

$(NAME): $(SRC)
	make -C libft
	gcc -o $(NAME) $(FLAGS) -L libft -lft $(SRC)

clean:
	make clean -C libft
	rm -f *.o

fclean:
	make fclean -C libft
	rm -f *.o
	rm -f $(NAME)

re: fclean all