/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_preci.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 11:05:32 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/27 11:00:25 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*int_with_precision(char *str, int preci)
{
	char	*tmp;
	size_t	i;

	if ((size_t)preci > ft_strlen(str) && preci > -1)
	{
		tmp = ft_strnew(preci + 1);
		i = 0;
		while (i < (size_t)preci - ft_strlen(str))
		{
			tmp[i] = '0';
			i++;
		}
		tmp[i] = '\0';
		ft_strcat(tmp, str);
		return (tmp);
	}
	return (str);
}
