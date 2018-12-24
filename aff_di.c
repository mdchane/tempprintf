/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_di.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 09:55:16 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/24 16:14:22 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*str_with_precision(char *str, int precision)
{
	char	*tmp;
	int		i;
	int		j;

	if (precision > ft_strlen(str))
	{
		tmp = ft_strnew(precision + 1);
		i = 0;
		while (i < precision - ft_strlen(str))
		{
			tmp[i] = '0';
			i++;
		}
		tmp[i] = '\0';
		ft_strcat(tmp, str);
		return (tmp);
	}
	return (str);
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
	return (1);
}

int		ft_opt_zero(t_final *final, char *str, int *nb_print, int neg)
{
	if (final->options[PLUS] && neg == 0)
			*nb_print += ft_putchar('+');
	else if (final->options[SPACE] && neg == 0)
		*nb_print += ft_putchar(' ');
	put_n_char('0', final->larg_min - ft_strlen(str) - 1 - *nb_print);
	if (neg)
		*nb_print += ft_putchar('-');
	*nb_print += ft_putstr(str);
	return (1);
}

intmax_t	cast_nbr(t_final *final, va_list av)
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
	return (nbr);
}

int		aff_int(t_final *final, va_list av)
{
	intmax_t	nbr;
	char		*str;
	int			nb_print;
	int			flag;
	int			neg;

	neg = 0;
	flag = 0;
	nb_print = 0;
	nbr = cast_nbr(final, av);
	if (nbr < 0)
		neg = 1;
	str = ft_itoa_base(nbr, 10);
	str = str_with_precision(str + neg, final->precision);;
	if (final->options[MINUS])
		flag = ft_opt_minus(final, str, &nb_print, neg);
	if (final->options[ZERO] && final->precision == 0)
		flag = ft_opt_zero(final, str, &nb_print, neg);
	else
	{
		if (final->options[MINUS])
			nb_print += put_n_char(' ', final->larg_min - nb_print);
		else
			nb_print += put_n_char(' ', final->larg_min - nb_print - ft_strlen(str) - neg);
		if (final->options[PLUS] && !final->options[MINUS] || (final->options[ZERO] && final->precision))
		{
			if (neg == 0)
				nb_print += ft_putchar('+');
			else
				nb_print += ft_putchar('-');
		}
	}
	if (flag == 0)
		nb_print += ft_putstr(str);
	return (nb_print);
}
