/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 12:40:26 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/30 08:27:26 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int main(void)
{
	char a[] = "hello Abdesslalam";
	char find[] = "Abd";
	printf("%s", ft_strstr(a, find));
}
