/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 15:51:52 by dchane            #+#    #+#             */
/*   Updated: 2018/12/18 14:27:26 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	put_n_char(char c, int n)
{
	int		i;

	i = -1;
	while (++i < n)
		ft_putchar(c);
}

p_func  *init_tab_func()
{
	p_func	*tab;

	tab = (p_func *)malloc(sizeof(p_func) * 128);
	tab['c'] = aff_char;
	tab['s'] = aff_str;
	tab['p'] = aff_ptr;
	return (tab);
}

void	print_options(t_final *final, int len_arg)
{
	if (final->options[ONE_OPT] != 1)
	{

	}
}

int		print_format(va_list va, t_final *final, p_func  *tab)
{
	int		i;

	i = 0;
	i += tab[final->type](final, va);
	return (i);
}
