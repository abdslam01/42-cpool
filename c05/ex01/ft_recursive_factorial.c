/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 19:01:02 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/02 14:55:04 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (!nb)
		return (1);
	else if (nb < 0)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}
