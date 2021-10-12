/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_to_stdout.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 09:21:39 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/12 19:45:00 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_write(int fd, char *buf, int count)
{
	int	tmp_read;
	int	total_read;

	total_read = 0;
	while (1)
	{
		tmp_read = read(fd, buf + count, count);
		total_read += tmp_read;
		if (!tmp_read)
			break ;
		strncpy(buf, buf + count, count);
	}
	if (count < total_read)
		write(1, buf + (total_read % count), count);
	else
		write(1, buf, total_read);
}

void	ft_write_files_to_stdout(int size, char **files, int count)
{
	int		i;
	int		fd;
	char	*buf;
	int		multi;

	i = -1;
	multi = (size > 1);
	buf = (char *) malloc(2 * count * sizeof(char));
	while (++i < size)
	{
		fd = open(files[i], O_RDWR);
		if (errno)
			ft_puterror(files[i], strerror(errno));
		if(!errno || (errno == EISDIR && multi))
		{
			if (multi && i != 0)
				ft_putstr(1, "\n");
			if(multi && (!errno || errno == EISDIR))
				ft_putfilename(files[i]);
			if (!errno && fd >= 2)
				ft_write(fd, buf, count);
		}
		if(fd > 2)
			close(fd);
	}
	free(buf);
}

void	ft_write_to_stdout(int size, char **args)
{
	int	buffer;

	if (size < 3)
		ft_puterror_arg(FT_NO_ARG, "");
	else
	{
		buffer = ft_atoi(args[2]);
		if (buffer == FT_IL_ARG)
			ft_puterror_arg(FT_IL_ARG, args[2]);
		else if (size > 3)
			ft_write_files_to_stdout(size - 3, args + 3, buffer);
		else
			ft_write_stdin_to_stdout(buffer);
	}
}
