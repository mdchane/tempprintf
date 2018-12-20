/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_di.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 09:55:16 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/20 12:49:28 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	aff_int(t_final *final, va_list av)
{
	long long	nbr;
	char		*str;
	int			nb_print;

	nb_print = 0;
	nbr = (long long)va_arg(av, long long);
	str = ft_itoa_base(nbr, 10);
	if (final->options[MINUS])
	{
		if (final->options[PLUS])
			nb_print += ft_putchar('+');
		if (final->options[SPACE])
			nb_print += ft_putchar(' ');
		nb_print += ft_putstr(str);
	}
	if (final->options[ZERO])
	{
		if (final->options[PLUS])
			nb_print += ft_putchar('+');
		if (final->options[SPACE])
			nb_print += ft_putchar(' ');
		put_n_char('0', final->larg_min - ft_strlen(str) - 2 - nb_print);
		nb_print +=ft_putstr(str);
	}
	else
	{
		nb_print += put_n_char(' ', final->larg_min - ft_strlen(str) - 2 - final->options[PLUS]);
		if (final->options[PLUS] && !final->options[MINUS])
			ft_putchar('+');
	}
	if (final->options[MINUS] == 0 && final->options[ZERO] == 0)
	{
		ft_putstr(str);
	}
}
