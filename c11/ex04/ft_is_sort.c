/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:03:30 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/13 18:50:48 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	asc;
	int	desc;
	int	all_eq;
	int	tmpv;

	if (length < 2)
		return (1);
	asc = 1;
	desc = 1;
	all_eq = 1;
	i = 0;
	while (i < length - 1)
	{
		tmpv = (*f)(tab[i], tab[i + 1]);
		if (tmpv > 0)
			asc = 0;
		if (tmpv != 0)
			all_eq = 0;
		if (tmpv < 0)
			desc = 0;
		i++;
	}	
	return (asc ^ desc ^ all_eq);
}
