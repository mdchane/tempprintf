/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchane <dchane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 12:27:25 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/14 16:27:42 by dchane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printf(const char *format, ...)
{
	va_list	av;
	size_t	i;
	p_func  *tab[NB_FORMATS];

	init_tab_func(tab);
	va_start(av, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i = ft_get_format(av, format + i, tab);
			break ;
		}
		else
			ft_putchar(format[i]);
		i++;
	}
	va_end(av);
	ft_putchar('\n');
	return (1);
}
