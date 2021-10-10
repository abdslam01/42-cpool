/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_stdin_to_stdout.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 11:20:26 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/10 14:41:06 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	write_stdin_to_stdout(void)
{
	int		c;
	int		i;
	char	arr[30000];

	i = 0;
	while (read(0, &c, 1))
		arr[i++] = c;
	arr[i] = 0;
	ft_putstr(arr);
}
