/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:20:14 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/28 19:21:01 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;
	int	is_upp;

	i = 0;
	while (str[i])
	{
		is_upp = str[i] >= 'A' && str[i] <= 'Z';
		if (is_upp)
			str[i] += 32;
		i++;
	}
	return (str);
}