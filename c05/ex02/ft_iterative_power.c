/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 19:06:37 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/03 15:14:14 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	to_return;

	if (power < 0)
		return (0);
	to_return = 1;
	while (power)
	{
		to_return *= nb;
		power--;
	}
	return (to_return);
}
