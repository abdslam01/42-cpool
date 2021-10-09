/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 10:54:16 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/09 15:46:50 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H
# define FT_CAT_H

# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>

void	ft_putstr(char *str);
void	ft_write_files_to_stdout(int count, char **files);
void	ft_write_stdin_to_stdout(void);

#endif
