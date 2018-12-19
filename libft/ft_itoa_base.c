/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/18 11:28:58 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/19 12:51:45 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_len_num_base(long long n, int base)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / base;
		len++;
	}
	return (len);
}

void	check_neg(int *nbr, int *base)
{
	if (*nbr < 0 && *base == 10)
	{
		*neg = 1;
		*nbr = -(*nbr);
	}
}

char		*ft_itoa_base(long long nbr, int base)
{
	char		*str;
	int			len;
	int			i;
	int			neg;
	int			rest;

	neg = 0;
	len = ft_len_num_base(nbr, base);
	if (!(str = (char *)malloc(sizeof(char) * (len + 2))))
		return (NULL);
	i = 0;
	if (nbr == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}
	check_neg(&nbr, &base);
	while (nbr != 0)
	{
		rest = nbr % base;
		str[i++] = (rest > 9) ? (rest - 10) + 'a' : rest + '0';
		nbr = nbr / base;
	}
	if (neg)
		str[i++] = '-';
	str[i] = '\0';
	ft_strrev(str);
	return (str);
}
