/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <abahafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 11:44:59 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/23 14:05:37 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_output(char i, char j, char k, short is_last_time)
{
	char	l;

	l = j + 1;
	while (l <= '9')
	{
		write(1, &i, 1);
		write(1, &j, 1);
		write(1, " ", 1);
		write(1, &k, 1);
		write(1, &l, 1);
		if (!is_last_time)
			write (1, ", ", 2);
		l++;
	}
}

void	ft_print_comb2(void)
{
	char	i;
	char	j;
	char	k;
	char	l;
	short	is_last_time;

	is_last_time = 0;
	i = '0';
	while (i <= '5')
	{
		j = '0';
		while (j <= '9')
		{
			k = '0';
			while (k <= '9')
			{
				if (i == '9')
					is_last_time = 1;
				ft_write_output(i, j, k, is_last_time);
				k++;
			}
			j++;
		}
		i++;
	}
}
