# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abahafid <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 08:31:45 by abahafid          #+#    #+#              #
#    Updated: 2021/10/07 09:38:54 by abahafid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

files="ft_putchar.c ft_strcmp.c ft_swap.c ft_putstr.c ft_strlen.c"
for file in $files; do
	curr_file=`echo $file | cut -d. -f1`
	gcc -c $curr_file.c -o $curr_file.o
done

ar rc libft.a ft*.o

for file in $files; do
	curr_file=`echo $file | cut -d. -f1`
	rm -rf $curr_file.o
done
