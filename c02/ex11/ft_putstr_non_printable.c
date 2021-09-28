/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 18:43:00 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/28 15:59:00 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_printable(unsigned char c)
{
	return (c >= 32 && c <= 126);
}

void	ft_puthex(unsigned char c)
{
	int	left;
	int	right;

	left = c >> 4;
	right = c & 0xf;
	if (left > 9)
		left += 'a' - 10;
	else
		left += '0';
	if (right > 9)
		right += 'a' - 10;
	else
		right += '0';
	write(1, "\\", 1);
	write(1, &left, 1);
	write(1, &right, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	ch;

	i = 0;
	while (str[i])
	{
		ch = (unsigned char) str[i];
		if (ft_is_printable(ch))
			write(1, &ch, 1);
		else
			ft_puthex(ch);
		i++;
	}
}
