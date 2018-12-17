/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 10:30:59 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/17 12:18:28 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int		main()
{
	wint_t	i = 'l';
	char	c = 'o';

	ft_printf("my printf :\nc : %c et z : %lc\n", i, i);
	printf("real printf :\nc : %c et z : %lc\n", i, i);
	printf("%c\n", c);
	printf("%+c\n", c);
	printf("%-c\n", c);
	printf("% c\n", c);
	printf("%0c\n", c);
	printf("%#c\n", c);
	printf("%10c\n", c);
	printf("%.5c\n", c);
	printf("%hc\n", c);
	printf("%lc\n", c);
	printf("%hhc\n", c);
	printf("%Lc\n", c);
	printf("%c\n", c);


	return (0);
}
