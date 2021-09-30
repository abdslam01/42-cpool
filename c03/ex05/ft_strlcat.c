/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:22:37 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/30 10:37:55 by abahafid         ###   ########.fr       */
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

unsigned int	min(unsigned int a, unsigned int b)
{
	if (a < b)
		return (a);
	return (b);
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
	i = len_d;
	j = 0;
	while (i < size - 1)
		dest[i++] = src[j++];
	dest[i] = 0;
	return (len_s + min(len_d, size));
}
