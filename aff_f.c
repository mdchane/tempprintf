/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_f.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/02 15:55:46 by mdchane           #+#    #+#             */
/*   Updated: 2019/01/02 16:56:27 by mdchane          ###   ########.fr       */
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

int		main()
{
	double	f;
	long int	d;

	f = 123.456;
	d = (long)f;
	printf("%f\n", f);
	printf("%ld\n", d);
	printf("%s\n", ft_ftoa(f));
}
