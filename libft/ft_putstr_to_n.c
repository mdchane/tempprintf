/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_to_n.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 12:08:10 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/27 12:16:20 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_to_n(char const *s, size_t n)
{
	if (s == NULL)
		return (0);
	if (n < ft_strlen(s))
	{
		write(1, s, n);
		return (n);
	}
	else
		write(1, s, ft_strlen(s));
	return (ft_strlen(s));
}
