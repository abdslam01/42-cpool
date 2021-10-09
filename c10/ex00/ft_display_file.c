/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:42:43 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/09 10:09:46 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, str + i++, 1);
}

void	ft_read_file(char *file)
{
	int		fd;
	char	c;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		ft_putstr("Cannot read file.\n");
	else
	{	
		while (read(fd, &c, 1))
			write(1, &c, 1);
		close(fd);
	}
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		ft_putstr("File name missing.\n");
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	else
		ft_read_file(argv[1]);
}
