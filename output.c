/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 11:51:05 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/17 12:20:11 by mdchane          ###   ########.fr       */
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
	int		i;
	wint_t	c;

	i = -1;
	while (++i < final->larg_min - 1)
		ft_putchar(' ');
	if (final->modif[l] == 1)
		c  = (unsigned long)va_arg(av, unsigned long);
	else
		c = (char)va_arg(av, int);
	c = (wint_t)c;
	ft_putchar(c);
	return (1);
}

int	aff_int(va_list av)
{
	ft_putnbr(va_arg(av, int));
	return (1);
}
