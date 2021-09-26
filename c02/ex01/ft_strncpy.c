/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 10:01:41 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/26 17:43:35 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	short			is_consumed;

	i = 0;
	is_consumed = 0;
	while (i < n)
	{
		if (!is_consumed && !src[i])
			is_consumed = 1;
		if (is_consumed)
			dest[i] = '\0';
		else
			dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
