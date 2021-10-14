/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 14:22:37 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/14 18:46:47 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l_src;
	unsigned int	l_dest;

	l_src = ft_strlen(src);
	l_dest = ft_strlen(dest);
	if (!size)
		return (l_src);
	i = l_dest;
	j = 0;
	if (size <= i)
		return (l_src + size);
	while (src[j] && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = 0;
	return (l_dest + l_src);
}
