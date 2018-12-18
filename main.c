/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 10:30:59 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/18 15:50:10 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"
#include <locale.h>

int		main()
{
	setlocale(LC_ALL, "");
	char	*c = "coucou";

	ft_printf("my ft_printf :\n");
	ft_printf("%p\n", &c);
	ft_printf("%+40p\n", &c);
	ft_printf("%-40p\n", &c);
	ft_printf("% 40p\n", &c);
	ft_printf("%040p\n", &c);
	ft_printf("%#40p\n", &c);
	ft_printf("%40.5p\n", &c);

	printf("real printf :\n");
	printf("%p\n", &c);
	printf("%+40p\n", &c);
	printf("%-40p\n", &c);
	printf("% 40p\n", &c);
	printf("%040p\n", &c);
	printf("%#40p\n", &c);
	printf("%40.5p\n", &c);

	printf("%d itoabase = %s\n", 1452, ft_itoa_base(1452, 16));

	return (0);
}
