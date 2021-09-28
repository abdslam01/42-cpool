/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:57:58 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/28 17:04:01 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int main(void)
{
	printf("%d\n", ft_strcmp("aaa", "aza"));
	printf("%d\n", ft_strcmp("ff", "ff"));
	printf("%d\n", ft_strcmp("aza", "aaa"));
}
