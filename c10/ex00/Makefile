# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abahafid <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/09 08:19:40 by abahafid          #+#    #+#              #
#    Updated: 2021/10/09 10:08:14 by abahafid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_display_file
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
SRC		= ft_display_file.c
OBJ		= $(SRC:.c=.o)

all: $(OBJ)
	$(CC) $(FLAGS) $< -o $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)
