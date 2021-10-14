/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:08:12 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/14 12:14:57 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	main(int argc, char **argv)
{
	int		n1;
	int		n2;
	void	(*opers[5])(int, int);
	int		oper_pos;

	if (argc < 4)
		return (1);
	set_oprations(opers);
	oper_pos = find_op(argv[2][0], "+-*/%");
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	if (oper_pos >= 0 && oper_pos <= 4 && argv[2][1] == 0)
	{
		calculate(n1, n2, (*opers[oper_pos]));
		ft_putstr("\n");
	}
	else if (oper_pos == -1)
		return (1);
	else
		write(1, "0\n", 2);
}
