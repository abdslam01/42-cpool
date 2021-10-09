/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:42:11 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/09 15:58:45 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_write_files_to_stdout(argc - 1, argv + 1);
	else
		ft_write_stdin_to_stdout();
}
