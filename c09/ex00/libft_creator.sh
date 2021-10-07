# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abahafid <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 08:31:45 by abahafid          #+#    #+#              #
#    Updated: 2021/10/07 09:27:43 by abahafid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/sh

files=`ls ft*.c`
for file in $files; do
	curr_file=`echo $file | cut -d. -f1`
	gcc -c $curr_file.c -o $curr_file.o
	echo creating $curr_file.o
done

ar rc libft.a ft*.o
echo -----creating library

for file in $files; do
	curr_file=`echo $file | cut -d. -f1`
	rm -rf $curr_file.o
	echo deleting $curr_file.o
done
