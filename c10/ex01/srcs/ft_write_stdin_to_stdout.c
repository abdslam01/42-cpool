/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_stdin_to_stdout.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:14:45 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/09 16:23:58 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_write_stdin_to_stdout(void)
{
	char	c;
	char	is_stdin_empty;

	is_stdin_empty = 1;
	while (read(0, &c, 1))
	{
		is_stdin_empty = 0;
		write(1, &c, 1);
	}
	if (is_stdin_empty)
	{	
		while (!read(0, &c, 1))
			;
		write(1, &c, 1);
	}
}
