/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:51:29 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/03 11:18:55 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_check_unique_and_signs(char *str, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (str[i] == '-' || str[i] == '+' || str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	 b_size;

	b_size = ft_strlen(base);
	if (b_size < 2 || !ft_check_unique_and_signs(base, b_size))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (nbr == 1 << (sizeof(int) * 8 - 1))
		{
			ft_putnbr_base(nbr / b_size * -1, base);
			ft_putnbr_base(nbr % b_size * -1, base);
			return ;
		}
		nbr *= -1;
	}
	if (nbr < b_size)
		write(1, base + nbr, 1);
	else
	{
		ft_putnbr_base(nbr / b_size, base);
		ft_putnbr_base(nbr % b_size, base);
	}
}
