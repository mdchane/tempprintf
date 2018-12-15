/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchane <dchane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 15:51:52 by dchane            #+#    #+#             */
/*   Updated: 2018/12/15 14:15:38 by dchane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


p_func  *init_tab_func()
{
    p_func  *tab;

    tab = (p_func *)malloc(sizeof(p_func) * 128);
    tab['c'] = aff_char;
    return (tab);
}

int     print_format(va_list va, t_final *final, p_func  *tab)
{
    tab[final->type](va);

    return (0);
}