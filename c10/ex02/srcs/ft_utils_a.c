/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_a.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 09:04:23 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/12 16:59:21 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_putstr(int s_out, char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(s_out, str, i);
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
		ft_putstr(2, "tail: option requires an argument -- c\n");
		ft_putstr(2, "usage: ft_tail [-c #] [file ...]\n");
	}
	else if (err_no == FT_IL_ARG)
	{
		ft_putstr(2, "tail: illegal offset -- ");
		ft_putstr(2, arg_name);
		ft_putstr(2, "\n");
	}
}

void	ft_puterror(char *file_name, char *err_str)
{
	if (errno != EISDIR)
	{
		ft_putstr(2, "tail: ");
		ft_putstr(2, file_name);
		ft_putstr(2, ": ");
		ft_putstr(2, err_str);
		ft_putstr(2, "\n");
	}
	errno = 0;
}
