/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_files_to_stdout.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:01:12 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/09 15:58:56 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_put_error(char *file, char *err_str)
{
	ft_putstr("ft_cat: ");
	ft_putstr(file);
	ft_putstr(": ");
	ft_putstr(err_str);
	write(1, "\n", 1);
}

void	ft_write_files_to_stdout(int count, char **files)
{
	int		i;
	int		fd;
	int		c;
	char	*err_str;

	i = -1;
	while (++i < count)
	{
		if (files[i][0] == '-' && !files[i][1])
		{
			ft_write_stdin_to_stdout();
			continue ;
		}
		fd = open(files[i], O_RDWR);
		err_str = strerror(errno);
		if (errno)
		{
			ft_put_error(files[i], err_str);
			errno = 0;
		}
		else if (fd < 0)
			ft_putstr("Cannot read file.\n");
		else
		{
			while (read(fd, &c, 1))
				write(1, &c, 1);
			close(fd);
		}
	}
}
