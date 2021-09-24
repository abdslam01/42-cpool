/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <abahafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:57:41 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/24 11:25:23 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putarray(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
}

int	ft_check_for_next_comb(int *arr, int size)
{
	int	i;

	i = size - 1;
	if (arr[i] < 9)
		return (i);
	while (i > 0)
	{
		if (arr[i] == arr[i - 1] + 1)
			i--;
		else
			break ;
	}
	return (--i);
}

void	ft_next_comb(int *arr, int i_start, int size)
{
	arr[i_start]++;
	i_start++;
	while (i_start < size)
	{
		arr[i_start] = arr[i_start - 1] + 1;
		i_start++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;
	int	index_start_comb;

	i = 0;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	while (1)
	{
		ft_putarray(arr, n);
		index_start_comb = ft_check_for_next_comb(arr, n);
		if (index_start_comb == -1)
			break ;
		else
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		ft_next_comb(arr, index_start_comb, n);
	}
}
