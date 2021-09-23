/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <abahafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 16:57:41 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/23 19:28:12 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// void	ft_putnbr(int nb)
// {
// 	if (nb < 0)
// 	{
// 		ft_putchar('-');
// 		nb *= -1;
// 	}
// 	if (nb < 10)
// 	{
// 		ft_putchar(nb + '0');
// 	}
// 	else
// 	{
// 		ft_putnbr(nb / 10);
// 		ft_putchar(nb % 10 + '0');
// 	}
// }

// int	ft_number_digits(int nb)
// {
// 	int	count;

// 	count = 0;
// 	if(nb == 0)
// 		return (1);
// 	while (nb)
// 	{
// 		nb /= 10;
// 		count++;
// 	}
// 	return (count);
// }
char*	next_comb(char *arr, int n)
{
	char *t_arr[n];
	int	i;

	i = 0;
	while(i < n)
		t_arr[i] = arr[i];
	
	i =  n - 1;
	if(t_arr[i] == 9)
	{
		
	}
}
void	ft_print_combn(int n)
{
	char arr[10];
	int	i;

	i = n;
	while (i > 1)
	{
		arr[i] = i + '0';
		i--;
	}
	arr[0] = 0;
	
}
