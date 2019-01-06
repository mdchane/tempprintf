/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchane <dchane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 15:55:46 by mdchane           #+#    #+#             */
/*   Updated: 2019/01/06 16:39:32 by dchane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <float.h>
// long double cast_f(t_final *fl, va_list av)
// {
// 	if ()
// }

void	create_string(double nb, char *rest, int i)
{
	int		afterdots;
	int		dot;

	dot = 0;
	afterdots = 0;
	if (nb < 1)
	{
		rest[i++] = '.';
		dot = i;
		while (afterdots < 6)
		{
			nb *= 10;
			if (((int)(nb + 0.000001)) != 10)
				rest[i++] = (int)(nb + 48 + 0.000001);
			nb -= (int)nb;
			afterdots++;
		}
	}
	while (i - dot < 6)
		rest[i++] = '0';
	rest[i] = '\0';
}

char	*ft_ftoa(double n)
{
	char		*flt;
	char		*first;
	long int	nb;
	int			i;

	i = -1;
	printf("n = %f\n", n);
	nb = (long int)n;
	printf("nb = %ld\n", nb);
	first = ft_itoa_base(nb, 10);
	printf("first = %s\n", first);
	flt = (char *)malloc(100);
	printf("flt = %s\n", flt);
	n -= (double)nb;
	printf("n = %f\n", n);
	if (n < 0)
		n *= -1;
	printf("n = %f\n", n);
	while (first[++i])
		flt[i] = first[i];
	printf("flt = %s\n", flt);
	create_string(n, flt, i);
	printf("flt = %s\n", flt);
	free(first);
	return (flt);
}

char	*ft_ftoa_base(long double value, int base)
{
	char	*s;
	long double	n;
	int		sign;
	int		i;

	n = (value < 0) ? -(long double)value : value;
	sign = (value < 0 && base == 10) ? -1 : 0;
	i = (sign == -1) ? 2 : 1;
	while ((n /= base) >= 1)
		i++;
	if (!(s = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	s[i] = '\0';
	n = (value < 0) ? -(long)value : value;
	while (i-- + sign)
	{
		s[i] = (n % base < 10) ? n % base + '0' : n % base + 'a' - 10;
		n /= base;
	}
	(i == 0) ? s[i] = '-' : 0;
	return (s);
}

int		aff_float(t_final *fl, va_list va)
{
	long double nbr;
	char	*rest;
	int		nb_print;

	nb_print = 0;
	(void)fl;
	nbr = (long double)(va_arg(va, long double));
	rest = ft_ftoa(nbr);
	ft_putstr(rest);
	return (nb_print);
}
