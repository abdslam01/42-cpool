/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 08:51:51 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/05 11:40:40 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_in(char c, char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (c == str[i])
			return (1);
	return (0);
}

int	ft_strlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_in(str[i], charset))
		i++;
	return (i);
}

int	words_counter(char *str, char *charset)
{
	int		i;
	int		w_counter;
	char	is_charset;

	i = -1;
	w_counter = 0;
	if (!ft_is_in(str[++i], charset))
		w_counter++;
	i++;
	while (str[i])
	{
		is_charset = ft_is_in(str[i - 1], charset);
		if (is_charset && !ft_is_in(str[i], charset))
			w_counter++;
		i++;
	}
	return (w_counter);
}

void	set_word_strs(char **strs, char *str, int s_len, int k)
{
	int	j;

	strs[k] = (char *) malloc((s_len + 1) * sizeof(char));
	j = -1;
	while (++j < s_len)
		strs[k][j] = *(str + j);
	strs[k][j] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;
	int		k;
	int		s_len;

	strs = (char **) malloc((words_counter(str, charset) + 1) * sizeof(char *));
	if (!strs)
		return (0);
	i = 0;
	k = 0;
	while (str[i])
	{
		s_len = ft_strlen(str + i, charset);
		if (s_len)
		{
			set_word_strs(strs, str + i, s_len, k);
			k++;
			i += s_len;
		}
		else
			i++;
	}
	strs[k] = (char *) malloc(sizeof(char));
	strs[k][0] = 0;
	return (strs);
}
