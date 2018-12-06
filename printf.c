/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 12:27:25 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/06 14:19:21 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_printf(const char *format, ...)
{
	va_list	av;
	size_t	i;

	va_start(av, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i = ft_format(av, format + i);
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
