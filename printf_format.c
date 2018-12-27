/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 15:51:52 by dchane            #+#    #+#             */
/*   Updated: 2018/12/27 12:49:35 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

p_func  *init_tab_func()
{
	p_func	*tab;

	tab = (p_func *)malloc(sizeof(p_func) * 128);
	tab['%'] = aff_percent;
	tab['c'] = aff_char;
	tab['s'] = aff_str;
	tab['p'] = aff_ptr;
	tab['d'] = aff_int;
	tab['i'] = aff_int;
	tab['u'] = aff_uint;
	tab['o'] = aff_oct;
	return (tab);
}

int		print_format(va_list va, const char *format, p_func *tab, size_t *nb_print)
{
	int		i;
	t_final	*final;

	final = init_final_format();
	i = ft_get_format(format, final);
	if (ft_strchr("%cspdiou", final->type))
		*nb_print += tab[(int)final->type](final, va);
	return (i);
}
