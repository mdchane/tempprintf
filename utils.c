/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/06 14:14:55 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/10 14:12:00 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_is_options(char c)
{
	if (c == '-' || c == '+' || c == '0' || c == ' '|| c == '#')
		return (1);
	else
		return (0);
}

int		ft_is_modif(char c)
{
	if (c == 'h' || c == 'l' || c == 'L')
		return (1);
	else
		return (0);
}
