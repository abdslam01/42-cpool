/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 16:25:57 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/03 09:40:05 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_space(unsigned char c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}

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
			if (str[i] == '-' || str[i] == '+' || str[i] == str[j]
				|| ft_is_space(str[i]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
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

int	ft_atoi_base(char *str, char *base)
{
	int	to_return;
	int	i;
	int	is_negative;
	int	b_size;

	i = 0;
	to_return = 0;
	is_negative = 1;
	b_size = ft_strlen(base);
	if (b_size < 2 || !ft_check_unique_and_signs(base, b_size))
		return (0);
	while (ft_is_space(str[i]))
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
