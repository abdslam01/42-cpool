/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 08:58:21 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/30 18:25:27 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_address(unsigned long add)
{
	int	tmp;
	int	i;

	i = 64;
	while (i)
	{
		i -= 4;
		tmp = add >> i & 0xf;
		if (tmp > 9)
			tmp = tmp + 'a' - 10;
		else
			tmp = tmp + '0';
		write(1, &tmp, 1);
	}
}

void	ft_print_data_hex(char *add, int remainder, int hex)
{
	int	i;
	int	j;

	i = -1;
	while (++i < remainder)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		j = 2;
		while (--j >= 0)
		{
			hex = add[i] >> (4 * j) & 0xf;
			if (hex > 9)
				hex += 'a' - 10;
			else
				hex += '0';
			write(1, &hex, 1);
		}
	}
	if (!add[i])
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		write(1, "00", 2);
	}
}

void	ft_print_data_ascii(char *add, int remainder)
{
	int	i;

	i = 0;
	while (i < remainder)
	{
		if (add[i] >= ' ' && add[i] <= '~')
			write(1, add + i, 1);
		else
			write(1, ".", 1);
		i++;
	}
	if (!add[i])
		write(1, ".", 1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	void			*return_addr;
	int				remainder;

	if (ft_strlen((char *) addr) < size)
		size = ft_strlen((char *) addr);
	return_addr = addr;
	i = 0;
	while (i < size)
	{
		if (size - i > 16)
			remainder = 16;
		else
			remainder = size - i;
		ft_print_address((unsigned long) addr);
		write(1, ":", 1);
		ft_print_data_hex((char *) addr, remainder, 0);
		write(1, " ", 1);
		ft_print_data_ascii((char *) addr, remainder);
		write(1, "\n", 1);
		i += 16;
		addr += 16;
	}
	return (return_addr);
}
