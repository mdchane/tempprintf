/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 15:51:52 by dchane            #+#    #+#             */
/*   Updated: 2018/12/24 12:28:02 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	put_n_char(char c, int n)
{
	int		i;

	i = -1;
	while (++i < n)
		ft_putchar(c);
	return (i);
}



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
	return (tab);
}

int		print_format(va_list va, const char *format, p_func *tab, size_t *nb_print)
{
	int		i;
	t_final	*final;

	final = init_final_format();
	i = ft_get_format(format, tab, final);
	*nb_print += tab[final->type](final, va);
	return (i);
}
