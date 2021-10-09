# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abahafid <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/09 10:42:31 by abahafid          #+#    #+#              #
#    Updated: 2021/10/09 15:58:37 by abahafid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ft_cat
MAIN	= ft_cat.c
HEADER	= ./includes/ft_cat.h
FILES	= ./srcs/ft_utils_a.c \
		  ./srcs/ft_write_files_to_stdout.c \
		  ./srcs/ft_write_stdin_to_stdout.c
OBJS	= $(FILES:.c=.o)
CC		= gcc
FLAGS	= -Wall -Wextra -Werror -Iincludes

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CC) $(FLAGS) $(OBJS) $(MAIN) -o $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

