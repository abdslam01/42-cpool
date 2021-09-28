/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:50:38 by abahafid          #+#    #+#             */
/*   Updated: 2021/09/28 16:53:40 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_print_memory(void *addr, unsigned int size);
int	main(void)
{
	char *s = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
	ft_print_memory(s, 100);
}
