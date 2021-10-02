/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:22:37 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/02 08:28:13 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_s;
	unsigned int	len_d;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dest);
	if (!size)
		return (len_s);
	else if (len_d <= size)
		return (len_s + len_d);
	i = len_d;
	j = 0;
	while (src[j] && j < size - len_d - 1)
		dest[i++] = src[j++];
	dest[i] = 0;
	return (len_s + size);
}
