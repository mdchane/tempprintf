/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 10:30:59 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/18 11:44:15 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"
#include <locale.h>

int		main()
{
	setlocale(LC_ALL, "");
	char	c = 'o';

	ft_printf("my printf\n");
	printf("real printf\n");
	printf("%p\n", &c);
	printf("%+40p\n", &c);
	printf("%-40p\n", &c);
	printf("% 40p\n", &c);
	printf("%040p\n", &c);
	printf("%#40p\n", &c);
	printf("%40p\n", &c);

	return (0);
}
