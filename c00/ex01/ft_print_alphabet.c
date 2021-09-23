/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <abahafid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 12:47:57 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/23 12:48:00 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	c_from;

	c_from = 'a';
	while (c_from <= 'z')
	{
		write(1, &c_from, 1);
		c_from++;
	}
}
