/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_files_to_stdout.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:01:12 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/14 16:50:42 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

void	ft_put_error(char *file, char *err_str, char *prog_name)
{
	ft_putstr(basename(prog_name));
	ft_putstr(": ");
	ft_putstr(file);
	ft_putstr(": ");
	ft_putstr(err_str);
	write(1, "\n", 1);
}

void	ft_write_file(char *file, char *prog_name)
{	
	int		fd;
	int		c;
	char	*err_str;

	if (file[0] == '-' && !file[1])
	{
		ft_write_stdin_to_stdout();
		return ;
	}
	fd = open(file, O_RDWR);
	err_str = strerror(errno);
	if (errno)
	{
		ft_put_error(file, err_str, prog_name);
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

void	ft_write_files_to_stdout(int count, char **files, char *prog_name)
{
	int	i;

	i = -1;
	while (++i < count)
		ft_write_file(files[i], prog_name);
}
