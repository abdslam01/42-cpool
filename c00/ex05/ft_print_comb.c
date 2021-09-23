/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:53:29 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/23 09:48:10 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_output(char i, char j, char k, short is_last_time)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, &k, 1);
	if (!is_last_time)
		write (1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;
	short	is_last_time;

	is_last_time = 0;
	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				if (i == '7' && j == '8' && k == '9')
					is_last_time = 1;
				ft_write_output(i, j, k, is_last_time);
				k++;
			}
			j++;
		}
		i++;
	}
}
