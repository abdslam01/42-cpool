/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:54:16 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/14 14:48:57 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>
# include <libgen.h>

void	ft_putstr(char *str);
void	ft_write_files_to_stdout(int count, char **files, char *prog_name);
void	ft_write_stdin_to_stdout(void);

#endif
