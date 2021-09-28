/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 17:32:54 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/28 17:40:44 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int main(void)
{
	char d[50] = "hello ";
	printf("%s\n", ft_strcat(d, "world, how are you!"));
}
