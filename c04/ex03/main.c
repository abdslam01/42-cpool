/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 15:08:55 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/30 15:49:32 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_atoi(char *str);

int main()
{
	printf("%d", ft_atoi(" \t\v\r\f\n  ---+--+1234ab567"));
}