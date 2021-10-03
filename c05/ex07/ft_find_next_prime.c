/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 09:44:54 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/03 18:25:28 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Babylonian method
int	ft_sqrt(int nb)
{
	int	est;
	int	n_est;

	est = nb >> 1;
	n_est = (est + nb / est) >> 1;
	while (n_est < est)
	{
		est = n_est;
		n_est = (est + nb / est) >> 1;
	}
	return (est);
}

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= ft_sqrt(nb))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
