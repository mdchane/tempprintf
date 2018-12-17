/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 15:51:52 by dchane            #+#    #+#             */
/*   Updated: 2018/12/17 11:46:32 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


p_func  *init_tab_func()
{
    p_func  *tab;

    tab = (p_func *)malloc(sizeof(p_func) * 128);
    tab['c'] = aff_c;
    return (tab);
}

int     print_format(va_list va, t_final *final, p_func  *tab)
{
	int		i;

	i = 0;
    i += tab[final->type](final, va);
    return (i);
}
