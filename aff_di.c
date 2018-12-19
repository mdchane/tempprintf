/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_di.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 09:55:16 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/19 12:51:53 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	aff_int(t_final *final, va_list av)
{
	long long	nbr;
	char		*str;

	nbr = (long long)va_arg(av, long long);
	str = ft_itoa_base(nbr, 10);

	if (final->options[MINUS])
	{
		if (final->options[PLUS])
			ft_putchar('+');
		ft_putstr(str);
	}
	if ()
}
