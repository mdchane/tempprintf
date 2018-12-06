/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 11:51:05 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/04 11:59:31 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	aff_str(va_list av)
{
	ft_putstr(va_arg(av, char *));
	return (1);
}

int	aff_char(va_list av)
{
	char c;
	c = va_arg(av, int);
	ft_putchar(c);
	return (1);
}

int	aff_int(va_list av)
{
	ft_putnbr(va_arg(av, int));
	return (1);
}
