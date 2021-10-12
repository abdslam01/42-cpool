/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write_to_stdout.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 09:21:39 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/12 12:35:09 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_shift_buffer(char *buf, int buf_size)
{
	int	i;

	i = 0;
	while (++i < buf_size)
		buf[i - 1] = buf[i];
}

void	ft_write_files_to_stdout(int size, char **files, int buf_size)
{
	int		i;
	int		fd;
	int		c;
	char	*buf;

	buf = (char *) malloc(buf_size * sizeof(char));
	i = -1;
	while (++i < size)
	{
		fd = open(files[i], O_RDWR);
		if (errno)
		{
			if (!i)
				ft_puterror(files[i], strerror(errno));
			else if (size != 1)
			{
				ft_putfilename(files[i]);
			}
			errno = 0;
		}
		else
		{
			while(read(fd, &c, 1))
			{
				ft_shift_buffer(buf, buf_size);
				buf[buf_size - 1] = c;
			}
			if (size > 1)
			{
				if (i > 0)
					ft_putstr("\n");
				ft_putfilename(files[i]);
			}
			ft_putstr(buf);	
			close(fd);
		}	
	}
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
		//else
		//	ft_write_stdin_to_stdout();
	}
}
