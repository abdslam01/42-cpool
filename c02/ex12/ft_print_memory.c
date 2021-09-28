/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 08:58:21 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/28 09:11:04 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 19:13:04 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/28 08:58:08 by abahafid         ###   ########.fr       */
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

void	ft_print_data_hex(char *add, int remainder)
{
	int	left;
	int	right;
	int	i;

	i = 0;
	while (i < remainder)
	{
		if (i % 2 == 0)
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
	}
	if (!add[i]){
		if(i % 2 == 0)
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
	while (str[i++]);
	return (i);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	void			*return_addr;
	int				remainder;

	if (ft_strlen((char *) addr) < size)
		size = ft_strlen((char *) addr) - 1;
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
		ft_print_data_hex((char *) addr, remainder);
		write(1, " ", 1);
		ft_print_data_ascii((char *) addr, remainder);
		write(1, "\n", 1);
		i += 16;
		addr += 16;
	}
	return (return_addr);
}

int	main(void)
{
	char *s = "Bonjour les aminches\n\n\nc est fo uii\n";
	ft_print_memory(s, 123);
	
}
