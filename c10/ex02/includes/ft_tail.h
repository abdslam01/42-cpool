/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 09:43:21 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/10 17:56:29 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <errno.h>

# define FT_NO_ARG -1
# define FT_IL_ARG -2

void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi_c(char *str);
void	write_files_to_stdout(int size, char **files);
void	write_stdin_to_stdout(void);
void	write_to_stdout_dash_c(int size, char **args);

#endif