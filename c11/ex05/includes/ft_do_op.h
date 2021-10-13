/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abahafid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 20:25:45 by abahafid          #+#    #+#             */
/*   Updated: 2021/10/13 12:11:42 by abahafid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H

# include <unistd.h>

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	calculate(int a, int b, void (*f)(int, int));
void	set_oprations(void (**opers) (int, int));
int		find_op(char op, char *operators);
void	plus(int a, int b);
void	minus(int a, int b);
void	mltip(int a, int b);
void	div(int a, int b);
void	mod(int a, int b);

#endif
