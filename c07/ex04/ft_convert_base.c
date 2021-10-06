/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:37:01 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/06 11:53:40 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_base(char *str)
{
	int	i;
	int	j;
	int	is_space;

	i = 0;
	while (str[i])
	{
		is_space = ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ');
		if (str[i] == '-' || str[i] == '+' || is_space)
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j++])
				return (0);
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

int	ft_find_in_base(char c, char *base)
{
	 int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base, int b_size)
{
	int	to_return;
	int	i;
	int	is_negative;

	i = 0;
	to_return = 0;
	is_negative = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_negative *= -1;
		i++;
	}
	while (ft_find_in_base(str[i], base) != -1)
		to_return = to_return * b_size + ft_find_in_base(str[i++], base);
	return (to_return * is_negative);
}

char	*ft_convert_to_base(int nbr, char *base, int b_size)
{
	int		nbr_size;
	int		nbr_tmp;
	char	*to_return;
	int		is_neg;

	is_neg = nbr < 0;
	nbr_size = is_neg + (nbr == 0) + 1;
	nbr_tmp = nbr;
	while (nbr_tmp)
	{
		nbr_tmp /= b_size;
		nbr_size++;
	}
	to_return = (char *) malloc(nbr_size * sizeof(char));
	to_return[--nbr_size] = 0;
	to_return[0] = '-';
	nbr_tmp = 1;
	if (is_neg)
		nbr_tmp = -1;
	while (nbr_size-- > is_neg)
	{
		to_return[nbr_size] = base[nbr % b_size * nbr_tmp];
		nbr /= b_size;
	}
	return (to_return);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	bf_size;
	int	bt_size;
	int	number;

	bf_size = ft_check_base(base_from);
	bt_size = ft_check_base(base_to);
	if (!bf_size || !bt_size)
		return (0);
	number = ft_atoi_base(nbr, base_from, bf_size);
	return (ft_convert_to_base(number, base_to, bt_size));
}
