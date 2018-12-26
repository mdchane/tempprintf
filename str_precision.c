/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_precision.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 11:05:32 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/26 11:05:46 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char	*str_with_precision(char *str, int precision)
{
	char	*tmp;
	int		i;
	int		j;

	if (precision > ft_strlen(str))
	{
		tmp = ft_strnew(precision + 1);
		i = 0;
		while (i < precision - ft_strlen(str))
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
