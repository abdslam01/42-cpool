/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 19:13:04 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/27 15:49:11 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_printable(char c)
{
	return (c >= ' ' && c <= '~');
}

void	ft_print_address(unsigned long add)
{
	int	tmp;
	int	i;

	i = 64;
	while (i)
	{
		i -= 4;
		tmp = add >> i & 0xf;
		if(tmp > 9)
			tmp = tmp + 'a' - 10;
		else
			tmp = tmp + '0';
		write(1, &tmp, 1);	
	}
}

void	ft_print_data_hex(char *add)
{
	int left;
	int right;
	int	i;

	i = 0;
	while (add[i])
	{
		if (i % 4 == 0)
			write(1, " ", 1);
		left = add[i] >> 4;
		right = add[i++] & 0xf;
		if (left > 9)
			left += 'a' - 10;
		else
			left += '0';
		if (right > 9)
			right += 'a' - 10;
		else
			right += '0';
		write(1, &left, 1);
		write(1, &right, 1);
		i++;
	}
}

void	ft_print_data_ascii(char *add)
{
	int	i;

	i = -1;
	while (add[++i])
	{
		if(ft_is_printable(add[i]))
			write(1, add + i, 1);
		else
			write(1, ".", 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	size = 10;
	ft_print_address((unsigned long) addr);
	write(1, ":", 1);
	ft_print_data_hex((char *) addr);
	write(1, " ", 1);
	ft_print_data_ascii((char *) addr);
	return (addr);
}

int	main()
{
	char *s = "Bonjour les a\nin";
	ft_print_memory(s, 16);
	
}
