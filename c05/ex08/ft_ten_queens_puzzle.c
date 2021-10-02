/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 09:17:19 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/02 09:52:19 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_reach(int q_l_pos, int **tab)
{
	int	j;

	j = -1;
	while (++j < 10)
	{
		if (j != q_l_pos && tab[q_l_pos][j] == 1)
			return (1);
	}
	j = -1;
	while (++j < 10)
	{
		if (j != q_l_pos && tab[j][j] == 1)
			return (1);
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10][10];
}
