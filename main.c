/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 10:30:59 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/20 12:40:52 by mdchane          ###   ########.fr       */
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

	// printf("my ft_printf  %llp\n", c);
	ft_printf("%d\n", i);
	ft_printf("%20d\n", i);
	ft_printf("%-20d\n", i);
	ft_printf("%+20d\n", i);
	ft_printf("% 20d\n", i);
	ft_printf("%#20d\n", i);
	ft_printf("%20.5d\n", i);
	ft_printf("%-+20d\n", i);
	ft_printf("% 020d\n", i);
	ft_printf("%+020d\n", i);
	ft_printf("%--20d\n", i);
	ft_printf("%-020d\n", i);
	ft_printf("% +20d\n", i);


	printf("real printf :\n");
	printf("MINUS:\n");
	printf("%-20d\n", i);
	printf("%-+20d\n", i);
	printf("%-#20d\n", i);
	printf("%- 20d\n", i);
	printf("%- +20d\n", i);
	printf("%--20d\n", i);
	printf("PLUS:\n");
	printf("%+20d\n", i);
	printf("%+-20d\n", i);
	printf("%+#20d\n", i);
	printf("%+020d\n", i);
	printf("%+ 20d\n", i);
	printf("%++20d\n", i);
	// printf("%20d\n", i);
	// printf("%-+20d\n", i);
	// printf("% 020d\n", i);
	// printf("%+020d\n", i);
	// printf("%--20d\n", i);
	// printf("%-020d\n", i);
	// printf("% +20d\n", i);





	return (0);
}
