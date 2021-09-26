/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 13:33:10 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/26 18:12:35 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_is_upper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_is_number(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	t;

	i = 0;
	if (str[i] && ft_is_lower(str[i]))
	{
		str[i] = str[i] - ('a' - 'A');
		i++;
	}
	while (str[i])
	{
		t = str[i - 1];
		if (ft_is_lower(t) || ft_is_upper(t) || ft_is_number(t))
		{
			if (ft_is_upper(str[i]))
				str[i] = str[i] + ('a' - 'A');
		}
		else
		{
			if (ft_is_lower(str[i]))
				str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}
