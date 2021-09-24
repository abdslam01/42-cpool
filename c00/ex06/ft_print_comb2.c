/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <abahafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 11:44:59 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/23 16:05:33 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_output(int left, int right, short is_last_time)
{
	ft_putchar(left / 10 + '0');
	ft_putchar(left % 10 + 48);
	ft_putchar(' ');
	ft_putchar(right / 10 + 48);
	ft_putchar(right % 10 + 48);
	if (!is_last_time)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int		left;
	int		right;
	short	is_last_time;

	is_last_time = 0;
	left = 0;
	while (left < 99)
	{
		right = left + 1;
		while (right < 100)
		{
			if (left == 98 && right == 99)
				is_last_time = 1;
			ft_write_output(left, right, is_last_time);
			right++;
		}
		left++;
	}
}
