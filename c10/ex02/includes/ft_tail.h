/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 08:58:00 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/12 18:14:59 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <unistd.h>
# include <fcntl.h>
# include <errno.h>
# include <string.h>
# include <stdlib.h>

# define FT_NO_ARG -1
# define FT_IL_ARG -2

void	ft_putstr(int s_out, char *str);
int		ft_atoi(char *str);
void	ft_puterror_arg(int err_no, char *arg_name);
void	ft_puterror(char *file_name, char *err_str);
void	ft_putfilename(char *filename);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
void	ft_write_stdin_to_stdout(int count);
void	ft_write_to_stdout(int size, char **args);

#endif
