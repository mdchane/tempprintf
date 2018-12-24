/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_di.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 09:55:16 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/24 12:18:39 by mdchane          ###   ########.fr       */
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

int		ft_opt_minus(t_final *final, char *str, int *nb_print)
{
	if (final->options[PLUS])
			*nb_print += ft_putchar('+');
		if (final->options[SPACE])
			*nb_print += ft_putchar(' ');
		*nb_print += ft_putstr(str);
	return (1);
}

int		ft_opt_zero(t_final *final, char *str, int *nb_print)
{
	if (final->options[PLUS])
			*nb_print += ft_putchar('+');
		if (final->options[SPACE])
			*nb_print += ft_putchar(' ');
		put_n_char('0', final->larg_min - ft_strlen(str) - 1 - *nb_print);
		*nb_print += ft_putstr(str);
	return (1);
}

void	ft_opt_others(t_final *final, char *str, int *nb_print)
{
	*nb_print += put_n_char(' ', final->larg_min - ft_strlen(str) - 1 -
			final->options[PLUS] - final->options[SPACE]);
		if (final->options[PLUS] && !final->options[MINUS])
			ft_putchar('+');
}


int		aff_int(t_final *final, va_list av)
{
	long long	nbr;
	char		*str;
	int			nb_print;
	int			flag;

	flag = 0;
	nb_print = 0;
	nbr = (long long)va_arg(av, long long);
	str = ft_itoa_base(nbr, 10);
	str = str_with_precision(str, final->precision);;
	if (final->options[MINUS])
		flag = ft_opt_minus(final, str, &nb_print);
	if (final->options[ZERO] && final->precision == 0)
		flag = ft_opt_zero(final, str, &nb_print);
	else
		ft_opt_others(final, str, &nb_print);
	if (flag == 0)
		ft_putstr(str);
	return (nb_print);
}
