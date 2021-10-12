/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 08:57:34 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/12 12:05:22 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"
// tail with -c option only
int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		if (!ft_strcmp(argv[1], "-c"))
			ft_write_to_stdout(argc, argv);
	}
}
