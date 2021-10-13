# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abahafid <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/12 20:18:00 by abahafid          #+#    #+#              #
#    Updated: 2021/10/13 10:16:09 by abahafid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= do-op
SRCS	= srcs/ft_utils.c \
		  srcs/ft_operations.c \
		  srcs/ft_put.c
OBJS	= $(SRCS:.c=.o)
HEADER	= includes/ft_do_op.h
MAIN	= ft_do_op.c
CC		= gcc
FLAGS	= -Wall -Wextra -Werror -I includes

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(FLAGS) $(OBJS) $(MAIN) -o $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
