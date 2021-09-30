/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 18:54:51 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/30 18:58:30 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	to_return;

	to_return = 1;
	while (nb)
	{
		to_return *= nb;
		nb--;
	}
	return (to_return);
}
