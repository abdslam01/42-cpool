/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 11:55:27 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/07 13:49:14 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	is_in_charset(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (c == charset[i])
			return (1);
	return (0);
}

int	strlen_charset(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_in_charset(str[i], charset))
		i++;
	return (i);
}

int	words_counter(char *str, char *charset)
{
	int	w_counter;
	int	i;

	w_counter = 0;
	i = 0;
	if (str[i] && !is_in_charset(str[i], charset))
		w_counter++;
	while (str[++i])
		if (is_in_charset(str[i - 1], charset)
			&& !is_in_charset(str[i], charset))
			w_counter++;
	return (w_counter);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		w_counter;
	int		i;
	int		j;
	int		c_str_len;

	w_counter = words_counter(str, charset);
	strs = (char **) malloc((w_counter + 1) * sizeof(char *));
	if (!strs)
		return (0);
	strs[w_counter] = 0;
	i = 0;
	while (i < w_counter)
	{
		c_str_len = strlen_charset(str, charset);
		strs[i] = (char *) malloc((c_str_len + 1) * sizeof(char));
		if (!strs[i])
			return (strs);
		if (c_str_len)
		{
			j = -1;
			while (++j < c_str_len)
				strs[i][j] = str[j];
			strs[i][j] = 0;
			str += c_str_len;
			i++;
		}
		else
			str++;
	}
	return (strs);
}
