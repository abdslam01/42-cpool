/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 18:19:10 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/30 09:20:44 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
	char d1[20] = "hello";
	char d2[20] = "hello";
	char s[]=" abd";
	unsigned int size = 10;
	unsigned int a, b;	
	a = ft_strlcat(d1, s, size);
	b = strlcat(d2, s, size);
	printf("mine => %u %s\n",a, d1);	
	printf("their => %u %s\n",b, d2);
}
