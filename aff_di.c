/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_di.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 09:55:16 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/26 11:46:29 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

intmax_t	cast_nbr(t_final *final, va_list av, int *neg)
{
	intmax_t	nbr;

	if (final->modif[h] == 1)
		nbr = (short)(va_arg(av, int));
	else if (final->modif[h] == 2)
		nbr = (signed char)(va_arg(av, int));
	else if (final->modif[l] == 1)
		nbr = (long)(va_arg(av, long int));
	else if (final->modif[l] == 2)
		nbr = (long long)(va_arg(av, long long int));
	else
		nbr = (int)va_arg(av, int);
	if (nbr < 0)
		*neg = 1;
	return (nbr);
}

int		ft_opt_minus(t_final *final, char *str, int *nb_print, int neg)
{
	if (final->options[PLUS] && neg == 0)
			*nb_print += ft_putchar('+');
	else if (final->options[SPACE] && neg == 0)
		*nb_print += ft_putchar(' ');
	if (neg)
		*nb_print += ft_putchar('-');
	*nb_print += ft_putstr(str);
	*nb_print += put_n_char(' ', final->larg_min - *nb_print);
	return (1);
}

int		ft_opt_zero(t_final *final, char *str, int *nb_print, int neg)
{
	if (final->options[SPACE] && neg == 0)
		*nb_print += ft_putchar(' ');
	if (final->precision)
	{
		put_n_char(' ', final->larg_min - ft_strlen(str) - *nb_print - neg);
		if (neg)
			*nb_print += ft_putchar('-');
	}
	else
	{
		if (neg)
			*nb_print += ft_putchar('-');
		put_n_char('0', final->larg_min - ft_strlen(str) - *nb_print);
	}
	*nb_print += ft_putstr(str);
	return (1);
}

void	ft_opt_plus(t_final *final, char *str, int *nb_print, int neg)
{
	if (final->options[ZERO] && final->precision == 0)
	{
		if (neg == 0)
			*nb_print += ft_putchar('+');
		else
			*nb_print += ft_putchar('-');
		*nb_print += put_n_char('0', final->larg_min - ft_strlen(str) - 1);
	}
	else
	{
		*nb_print += put_n_char(' ', final->larg_min - ft_strlen(str) - 1);
		if (neg == 0)
			*nb_print += ft_putchar('+');
		else
			*nb_print += ft_putchar('-');
	}
	*nb_print += ft_putstr(str);
}



int		aff_int(t_final *fl, va_list av)
{
	intmax_t	nbr;
	char		*str;
	int			nb_print;
	int			neg;

	neg = 0;
	nb_print = 0;
	nbr = cast_nbr(fl, av, &neg);
	str = ft_itoa_base(nbr, 10);
	str = str_with_precision(str + neg, fl->precision);;
	if (fl->options[MINUS])
		ft_opt_minus(fl, str, &nb_print, neg);
	else if (fl->options[PLUS])
		ft_opt_plus(fl, str, &nb_print, neg);
	else if (fl->options[ZERO] && !(fl->options[PLUS]))
		ft_opt_zero(fl, str, &nb_print, neg);
	else
	{
		if (fl->options[SPACE])
			nb_print += ft_putchar(' ');
		nb_print += put_n_char(' ', fl->larg_min - ft_strlen(str) - neg - nb_print);
		if (neg)
			nb_print += ft_putchar('-');
		nb_print += ft_putstr(str);
	}
	return (nb_print);
}
