/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 12:27:25 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/19 11:59:47 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printf(const char *format, ...)
{
	va_list	av;
	size_t	i;
	p_func  *tab;

	tab = init_tab_func();
	va_start(av, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
			i += ft_get_format(av, format + i + 1, tab);
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(av);
	return (1);
}
