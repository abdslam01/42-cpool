/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 09:17:19 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/02 14:22:40 by abahafid         ###   ########.fr       */
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

void	set_queen(int **tab, int row, int col)
{
	int	i;

	i = 0;
	while (i < 10)
	{
		tab[i][col] = 0;
		if (i == row)
			tab[row][col] = 1;
		i++;
	}
}

void	write_queens(int **tab)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (tab[i][j] == 1)
			{
				tmp = '0' + i;
				write(1, &tmp, 1);
			}
			j++;
		}
		i++;
	}
	write(1, "\n", 1);
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10][10];
	int	to_return;
	int	i;
	int	col;

	to_return = 0;
	i = 0;
	while (i < 10)
	{
		col = 0;
		set_queen((int **) tab, i, col);
		while (check_reach(i, (int **) tab))
		{
			write (1, "-\n", 2);
			set_queen((int **) tab, i, col++);
		}
		i++;
	}
	write_queens((int **) tab);
	return (to_return);
}
