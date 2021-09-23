/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 17:53:29 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/22 19:24:55 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	short	i;
	short	j;
	short	k;
	short	is_first_print;

	is_first_print = 0;
	i = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			k = j + 1;
			while (k < 10)
			{
				write(1, (i*100 + j*10 + k) + "", 3);
				if (is_first_print == 0)
				{
					is_first_print = 1;
					continue;
				}
				write(1, ", ", 2);
				k++;
			}
		j++;	
		}
		i++;
	}
}
