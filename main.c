/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchane <dchane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 10:30:59 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/15 14:23:28 by dchane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int		main()
{
	int		i = 125;
	char	c = 'o';

	ft_printf("%c\n", c);
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
