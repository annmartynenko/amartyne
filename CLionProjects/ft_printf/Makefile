#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amartyne <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/18 12:02:58 by amartyne          #+#    #+#              #
#    Updated: 2018/07/19 15:15:02 by amartyne         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_printf

SRC = ft_printf.c main.c number.c

FLAGS = -Wall -Wextra -Werror

HDR = ft_printf.h

all: $(NAME)

$(NAME): $(SRC)
	make -C libft
	gcc -o $(NAME) $(FLAGS) -L libft -lft $(SRC)

clean:
	make clean -C libft

fclean:
	make fclean -C libft
	rm -f $(NAME)

re: fclean all