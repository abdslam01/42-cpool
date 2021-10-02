/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:16:46 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/02 16:19:20 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_argv(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, str + i++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	while (argc > 1)
		print_argv(argv[--argc]);
}
