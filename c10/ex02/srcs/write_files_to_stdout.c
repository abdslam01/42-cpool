/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_files_to_stdout.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 10:10:55 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/10 11:06:41 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_print_file_name(char *file_name)
{
	ft_putstr("==> ");
	ft_putstr(file_name);
	ft_putstr(" <==\n");
}

void	ft_print_error(char *file_name, char *err_str)
{
	ft_putstr("ft_tail: ");
	ft_putstr(file_name);
	ft_putstr(": ");
	ft_putstr(err_str);
	ft_putstr("\n");
}

void	write_files_to_stdout(int size, char **files)
{
	int	i;
	int	c;
	int	write_file_name;
	int	fd;

	write_file_name = (size > 1);
	i = -1;
	while (++i < size)
	{
		fd = open(files[i], O_RDWR);
		if (write_file_name)
			ft_print_file_name(files[i]);
		if (errno)
		{
			if (write_file_name)
				ft_print_error(files[i], strerror(errno));
			errno = 0;
			continue ;
		}
		while (read(fd, &c, 1))
			write(1, &c, 1);
		if (i < size - 1)
			ft_putstr("\n");
		close(fd);
	}
}
