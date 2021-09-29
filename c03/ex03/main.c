/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 08:55:35 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/29 09:09:46 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int main(void)
{
	char d[50] = "hello ";
	printf("%s\n", ft_strncat(d, "world, how are you!", 5));
}
