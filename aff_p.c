/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_p.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 11:27:09 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/18 14:27:11 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	aff_ptr(t_final *final, va_list av)
{
	unsigned long	adr;

	adr = (unsigned long)va_arg(av, unsigned long);
	ft_putstr("0x");
	ft_putstr(ft_itoa_base(adr, 16));
}
