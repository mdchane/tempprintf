/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 15:51:52 by dchane            #+#    #+#             */
/*   Updated: 2019/01/07 13:50:50 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

p_func  *init_tab_func()
{
	p_func	*tab;

	if (!(tab = (p_func *)malloc(sizeof(p_func) * 128)))
		return (NULL);
	tab['%'] = aff_percent;
	tab['c'] = aff_char;
	tab['s'] = aff_str;
	tab['p'] = aff_ptr;
	tab['d'] = aff_int;
	tab['i'] = aff_int;
	tab['u'] = aff_uint;
	tab['o'] = aff_oct;
	tab['x'] = aff_hexa;
	tab['X'] = aff_hexa;
	tab['f'] = aff_float;
	return (tab);
}

int		print_format(va_list va, const char *format, p_func *tab, size_t *nb_print)
{
	int		i;
	t_final	*final;

	final = init_final_format();
	i = ft_get_format(format, final);
	if (ft_strchr("%cspdiouxXf", final->type))
		*nb_print += tab[(int)final->type](final, va);
	ft_memdel((void **)&final);
	return (i);
}
