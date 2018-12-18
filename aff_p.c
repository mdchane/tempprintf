/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_p.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 11:27:09 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/18 15:44:08 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	aff_ptr(t_final *final, va_list av)
{
	unsigned long	adr;
	char			*str;

	adr = (unsigned long)va_arg(av, unsigned long);
	str = ft_itoa_base(adr, 16);

	if (final->options[MINUS] == 1)
	{
		ft_putstr("0x");
		ft_putstr(str);
	}
	if (final->options[ZERO] == 1)
	{
		ft_putstr("0x");
		put_n_char('0', final->larg_min - ft_strlen(str) - 2);
		ft_putstr(str);
	}
	else
		put_n_char(' ', final->larg_min - ft_strlen(str) - 2);
	if (final->options[MINUS] == 0 && final->options[ZERO] == 0)
	{
		ft_putstr("0x");
		ft_putstr(str);
	}
	return (1);
}
