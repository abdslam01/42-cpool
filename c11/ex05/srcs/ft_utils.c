/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:27:34 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/13 12:13:29 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

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
	while (str[i] >= '0' & str[i] <= '9')
		to_return = to_return * 10 + (str[i++] - '0');
	return (to_return * is_negative);
}

int	find_op(char op, char *operators)
{
	int	i;

	i = -1;
	while (operators[++i])
		if (op == operators[i])
			return (i);
	return (-1);
}

void	set_oprations(void (**opers) (int, int))
{
	opers[0] = plus;
	opers[1] = minus;
	opers[2] = mltip;
	opers[3] = div;
	opers[4] = mod;
}

void	calculate(int a, int b, void (*f)(int, int))
{
	(*f)(a, b);
}
