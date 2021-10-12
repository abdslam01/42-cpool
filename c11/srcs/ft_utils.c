/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:27:34 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/12 20:30:25 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	to_return;
	int	i;
	int	is_negative;

	i = 0;
	to_return = 0;
	is_negative = 1;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_negative *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		to_return = to_return * 10 + (str[i++] - '0');
	return (to_return * is_negative);
}
