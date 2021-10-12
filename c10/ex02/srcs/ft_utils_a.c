/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 09:04:23 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/12 11:41:59 by abahafid         ###   ########.fr       */
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
	while (s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	return (s1[i] - s2[i]);
}

int	ft_atoi(char *str)
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

void	ft_puterror_arg(int err_no, char *arg_name)
{
	if (err_no == FT_NO_ARG)
	{
		ft_putstr("tail: option requires an argument -- c\n");
		ft_putstr("usage: ft_tail [-c #] [file ...]\n");
	}
	else if (err_no == FT_IL_ARG)
	{
		ft_putstr("tail: illegal offset -- ");
		ft_putstr(arg_name);
		ft_putstr("\n");
	}
}

void	ft_puterror(char *file_name, char *err_str)
{
	ft_putstr("tail: ");
	ft_putstr(file_name);
	ft_putstr(": ");
	ft_putstr(err_str);
	ft_putstr("\n");
}
