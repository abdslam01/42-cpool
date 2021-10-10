/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_to_stdout_dash_c.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 17:28:03 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/10 18:34:08 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	write_to_stdout_dash_c(int size, char **args)
{
	int	buffer;

	buffer = FT_NO_ARG;
	if (size > 2)
		buffer = ft_atoi_c(args[2]);
	if (buffer == FT_NO_ARG)
	{
		ft_putstr("ft_tail: option requires an argument -- c\n");
		ft_putstr("usage: ft_tail [-c #] [file ...]\n");
	}
	else if (buffer == FT_IL_ARG)
	{
		ft_putstr("ft_tail: illegal offset --");
		ft_putstr(args[2]);
		ft_putstr("\n");
	}
	else
		ft_putstr("all right!\n");
}
