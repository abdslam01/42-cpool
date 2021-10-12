/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_stdin_to_stdout.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 13:56:12 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/12 19:20:51 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_write_stdin_to_stdout(int count)
{
	char	*buf;
	int		i;
	int		j;

	j = 0;
	buf = (char *) malloc(2 * count * sizeof(char));
	while (1)
	{
		i = read(0, buf + count, count);
		ft_strncpy(buf, buf + count, count);
		j += i;
		if (!i)
			break ;
	}
	if (count < j)
		write(1, buf + (j % count), count);
	else
		write(1, buf, j);
	free(buf);
}
