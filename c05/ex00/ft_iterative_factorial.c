/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:54:51 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/02 14:52:09 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	to_return;

	if (nb < 0)
		return (0);
	to_return = 1;
	while (nb)
	{
		to_return *= nb;
		nb--;
	}
	return (to_return);
}
