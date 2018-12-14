/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_format.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchane <dchane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/14 15:51:52 by dchane            #+#    #+#             */
/*   Updated: 2018/12/14 16:27:13 by dchane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"


void    init_tab_func(p_func  *tab[NB_FORMATS])
{
    *tab[CHAR] = &aff_char;
}

int     print_format(va_list va, t_final *final, p_func  *tab[NB_FORMATS])
{
    if (final->type == 'c')
         (*tab)[CHAR](va);

    return (0);
}