/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:25:36 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/05 10:04:17 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_final_len(int size, char **strs, char *sep)
{
	int	s_len;
	int	i;

	s_len = 0;
	i = 0;
	if (size < 1)
		return (1);
	while (i < size)
		s_len += ft_strlen(strs[i++]);
	s_len += ((size - 1) * ft_strlen(sep) + 1);
	return (s_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		k;
	char	*f_str;

	f_str = (char *) malloc(ft_final_len(size, strs, sep) * sizeof(char));
	i = -1;
	k = 0;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
			f_str[k++] = strs[i][j++];
		j = 0;
		while (i != size - 1 && sep[j])
			f_str[k++] = sep[j++];
	}
	f_str[k] = 0;
	return (f_str);
}
