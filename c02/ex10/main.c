/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:27:42 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/29 10:32:16 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
#include <stdio.h>
int main(void)
{
	char a[20] = "abc";
	ft_strlcpy(a, "xyzzz", 6);
	printf("%s", a);
}
