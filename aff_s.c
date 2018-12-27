/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_s.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 09:46:07 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/27 12:49:03 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	aff_str(t_final *final, va_list av)
{
	char	*str;
	int		nb_print;

	nb_print = 0;
	str = va_arg(av, char *);
	if (final->options[MINUS] == 1)
		nb_print += ft_putstr_to_n(str, final->preci);
	if (final->options[ZERO] == 1)
		nb_print += put_n_char('0', final->larg_min - ft_strlen(str));
	else
		nb_print += put_n_char(' ', final->larg_min - ft_strlen(str));
	if (final->options[MINUS] == 0)
		nb_print += ft_putstr_to_n(str, final->preci);
	return (nb_print);
}
