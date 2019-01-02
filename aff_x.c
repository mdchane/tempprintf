/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_x.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 10:36:19 by mdchane           #+#    #+#             */
/*   Updated: 2019/01/02 12:05:11 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	ft_opt_minus(t_final *final, char *str, int *nb_print, uintmax_t	nbr)
{
	if (final->options[DIESE] && final->preci <= 0 && nbr != 0)
	{
		if (final->type == 'X')
			*nb_print += ft_putstr("0X");
		else
			*nb_print += ft_putstr("0x");
	}
	*nb_print += ft_putstr(str);
	*nb_print += put_n_char(' ', final->larg_min - *nb_print);
}

static void	ft_opt_zero(t_final *fl, char *str, int *nb_print, uintmax_t	nbr)
{
	if (fl->options[DIESE] && fl->preci <= 0 && nbr != 0)
	{
		if (fl->type == 'X')
			*nb_print += ft_putstr("0X");
		else
			*nb_print += ft_putstr("0x");
	}
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
				*nb_print += put_n_char(' ', fl->larg_min - ft_strlen(str) - 2);
			if (nbr == 0 && fl->preci <= 0);
			else
			{
				if (fl->type == 'X')
					*nb_print += ft_putstr("0X");
				else
					*nb_print += ft_putstr("0x");
			}
		}
	else
		*nb_print += put_n_char(' ', fl->larg_min - ft_strlen(str));
	*nb_print += ft_putstr(str);
}

int		aff_deci(t_final *fl, va_list av)
{
	uintmax_t	nbr;
	char		*str;
	int			nb_print;

	nb_print = 0;
	nbr = cast_u(fl, av);
	str = ft_itoa_base_u(nbr, 16);
	if (fl->type == 'X')
		ft_strupper(str);
	if (ft_strcmp(str, "0") == 0 && fl->preci == 0)
		str = NULL;
	str = int_with_precision(str, fl->preci);
	if (fl->options[MINUS])
		ft_opt_minus(fl, str, &nb_print, nbr);
	else if (fl->options[ZERO] && fl->preci < 0)
		ft_opt_zero(fl, str, &nb_print, nbr);
	else
		ft_opt_others(fl, str, &nb_print, nbr);
	return (nb_print);
}
