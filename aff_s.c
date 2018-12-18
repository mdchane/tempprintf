/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_s.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 09:46:07 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/18 15:37:53 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	aff_str(t_final *final, va_list av)
{
	char	*str;

	str = va_arg(av, char *);
	if (final->options[MINUS] == 1)
		ft_putstr(str);
	if (final->options[ZERO] == 1)
		put_n_char('0', final->larg_min - ft_strlen(str));
	else
		put_n_char(' ', final->larg_min - ft_strlen(str));
	if (final->options[MINUS] == 0)
		ft_putstr(str);
	return (1);
}
