# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abahafid <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/10 09:28:52 by abahafid          #+#    #+#              #
#    Updated: 2021/10/10 17:27:18 by abahafid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_tail
HEADER	= ./includes/ft_tail.h
MAIN	= ft_tail.c
SRCS	= ./srcs/ft_utils_a.c \
		  ./srcs/write_files_to_stdout.c \
		  ./srcs/write_stdin_to_stdout.c \
		  ./srcs/write_to_stdout_dash_c.c
OBJS	= $(SRCS:.c=.o)
CC		= gcc
FLAGS	= -Wall -Wextra -Werror -I includes

all: $(NAME)

$(NAME): $(OBJS) $(HEADER) $(MAIN)
	$(CC) $(FLAGS) $(OBJS) $(MAIN) -o $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)
