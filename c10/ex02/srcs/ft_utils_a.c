/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 10:17:41 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/10 17:22:59 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_atoi_c(char *str)
{
	int	to_return;
	int	i;

	i = 0;
	to_return = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			to_return = to_return * 10 + (str[i++] - '0');
		else
			return (FT_IL_ARG);
	}
	return (to_return);
}
