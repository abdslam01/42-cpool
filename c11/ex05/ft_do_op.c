/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:08:12 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/12 20:30:22 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

int	main(int argc, char **argv)
{
	int	n1;
	int	n2;

	if (argc < 4)
		return (1);
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	if (argv[2][0] == '+')
		do_plus();
	else if (argv[2][0] == '-')
		do_minus(n1, n2);
	else if (argv[2][0] == '*')
		do_mltip(n1, n2));
	else if (argv[2][0] == '/')
		do_div(n1, n2));
	else if (argv[2][0] == '%')
		do_modulo(n1, n2));
	else
		write(1, "0\n", 2);
}
