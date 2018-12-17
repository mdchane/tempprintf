/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 11:51:05 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/17 14:22:58 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	aff_str(va_list av)
{
	ft_putstr(va_arg(av, char *));
	return (1);
}

int	aff_c(t_final *final, va_list av)
{
	wint_t	c;

	if (final->modif[l] == 1)
		c  = (unsigned long)va_arg(av, unsigned long);
	else
		c = (char)va_arg(av, int);
	c = (wint_t)c;
	if (final->options[MINUS] == 1)
		ft_putchar(c);
	if (final->options[ZERO] == 1)
		put_n_char('0', final->larg_min - 1);
	else
		put_n_char(' ', final->larg_min - 1);
	if (final->options[MINUS] == 0)
	{
		ft_putchar(c);
	}
	return (1);
}

int	aff_int(va_list av)
{
	ft_putnbr(va_arg(av, int));
	return (1);
}
