/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 10:30:59 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/19 12:32:18 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"
#include <locale.h>

int		main()
{
	setlocale(LC_ALL, "");
	char	*c = "coucou";
	int		i = 42;

	//ft_printf("my ft_printf :\n");



	printf("%d\n", i);
	printf("%20d\n", i);
	printf("%-20d\n", i);
	printf("%+20d\n", i);
	printf("% 20d\n", i);
	printf("%#20d\n", i);
	printf("%20.5d\n", i);
	printf("%-+20d\n", i);
	printf("% 020d\n", i);
	printf("%+020d\n", i);
	printf("%--20d\n", i);
	printf("%-020d\n", i);
	printf("% +20d\n", i);


	printf("%020s\n", c);
	ft_printf("%020s\n", c);



	return (0);
}
