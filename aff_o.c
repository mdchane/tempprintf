/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_o.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 09:47:09 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/27 10:04:54 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_opt_minus_o(t_final *final, char *str, int *nb_print)
{
	*nb_print += ft_putstr(str);
	*nb_print += put_n_char(' ', final->larg_min - *nb_print);
	return (1);
}

void	ft_opt_zero_o(t_final *final, char *str, int *nb_print)
{
	if (final->precision)
	{
		put_n_char(' ', final->larg_min - ft_strlen(str) - *nb_print);
	}
	else
	{
		put_n_char('0', final->larg_min - ft_strlen(str) - *nb_print);
	}
	*nb_print += ft_putstr(str);
}

int		aff_oct(t_final *fl, va_list av)
{
	uintmax_t	nbr;
	char		*str;
	int			nb_print;

	nb_print = 0;
	nbr = cast_u(fl, av);
	str = ft_itoa_base(nbr, 8);
	str = str_with_precision(str, fl->precision);
	if (fl ->options[DIESE] && nbr != 0)
		nb_print += ft_putchar('0');
	if (fl->options[MINUS])
		ft_opt_minus_o(fl, str, &nb_print);
	else if (fl->options[ZERO])
		ft_opt_zero_o(fl, str, &nb_print);
	else
	{
		nb_print += put_n_char(' ', fl->larg_min - ft_strlen(str));
		nb_print += ft_putstr(str);
	}
	return (nb_print);
}
