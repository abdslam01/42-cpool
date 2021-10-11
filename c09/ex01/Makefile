# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abahafid <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 09:55:18 by abahafid          #+#    #+#              #
#    Updated: 2021/10/11 19:03:25 by abahafid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
FILES	= ./srcs/ft_putchar.c \
		  ./srcs/ft_swap.c \
		  ./srcs/ft_putstr.c \
		  ./srcs/ft_strlen.c \
		  ./srcs/ft_strcmp.c
OBJECTS	= $(FILES:.c=.o)
HEADER	= ./includes/ft.h 

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@ -I./includes/

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
