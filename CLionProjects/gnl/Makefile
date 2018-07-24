#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amartyne <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/05 11:18:59 by amartyne          #+#    #+#              #
#    Updated: 2018/07/10 11:26:54 by amartyne         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = get_next_line

SRC = get_next_line.c main.c

HDR = get_next_line.h

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRC)
	make -C libft
	gcc -o $(NAME) $(FLAGS) -L libft -lft $(SRC)

clean:
	make clean -C libft

fclean:
	make fclean -C libft
	/bin/rm -f $(NAME)

re: fclean all