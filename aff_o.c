/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_o.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 09:47:09 by mdchane           #+#    #+#             */
/*   Updated: 2019/01/07 14:31:53 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_opt_minus_o(t_final *final, char *str, int *nb_print, uintmax_t	nbr)
{
	if (final->options[DIESE] && final->preci <= 0 && nbr != 0)
		*nb_print += ft_putchar('0');
	*nb_print += ft_putstr(str);
	*nb_print += put_n_char(' ', final->larg_min - *nb_print);
}

static void	ft_opt_zero_o(t_final *fl, char *str, int *nb_print)
{
	*nb_print += put_n_char('0', fl->larg_min - ft_strlen(str) - *nb_print);
	*nb_print += ft_putstr(str);
}

static void	ft_opt_others(t_final *fl, char *str, int *nb_print, uintmax_t	nbr)
{
	if (fl->options[DIESE] && fl->preci <= 0)
		{
			if (nbr == 0)
				*nb_print += put_n_char(' ', fl->larg_min - ft_strlen(str) - 1 - fl->preci);
			else
				*nb_print += put_n_char(' ', fl->larg_min - ft_strlen(str) - 1);
			if (nbr == 0 && fl->preci < 0);
			else
				*nb_print += ft_putchar('0');
		}
		else
			*nb_print += put_n_char(' ', fl->larg_min - ft_strlen(str));
		*nb_print += ft_putstr(str);
}

int		aff_oct(t_final *fl, va_list av)
{
	uintmax_t	nbr;
	char		*str;
	int			nb_print;

	nb_print = 0;
	nbr = cast_u(fl, av);
	str = ft_itoa_base_u(nbr, 8);
	if (ft_strcmp(str, "0") == 0 && fl->preci == 0)
		str = NULL;
	str = int_with_precision(str, fl->preci, 0);
	if (fl->options[MINUS])
		ft_opt_minus_o(fl, str, &nb_print, nbr);
	else if (fl->options[ZERO] && fl->preci < 0)
		ft_opt_zero_o(fl, str, &nb_print);
	else
		ft_opt_others(fl, str, &nb_print, nbr);
	ft_strdel(&str);
	return (nb_print);
}
