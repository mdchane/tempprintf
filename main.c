/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 20.10h18/12/01 10:30:59 by mdchane           #+#    #+#             */
/*   Updated: 20.10h18/12/24 11:48:15 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"
#include <locale.h>

int		main()
{
	setlocale(LC_ALL, "");
	char	*c = "coucou";
	int		i = 2147483647;


	ft_printf("my ft_printf  \n");
	ft_printf("MINUS:\n");
	ft_printf("%-20.10hd\n", i);
	ft_printf("%-+20.10hd\n", i);
	ft_printf("%-#20.10hd\n", i);
	ft_printf("%- 20.10hd\n", i);
	ft_printf("%- +20.10hd\n", i);
	ft_printf("%--20.10hd\n", i);
	ft_printf("PLUS:\n");
	ft_printf("%+20.10hd\n", i);
	ft_printf("%+-20.10hd\n", i);
	ft_printf("%+#20.10hd\n", i);
	ft_printf("%+020.10hd\n", i);
	ft_printf("%+ 20.10hd\n", i);
	ft_printf("%++20.10hd\n", i);
	ft_printf("%020.10hd\n", i);

	printf("real printf :\n");
	printf("MINUS:\n");
	printf("%-20.10hd\n", i);
	printf("%-+20.10hd\n", i);
	printf("%-#20.10hd\n", i);
	printf("%- 20.10hd\n", i);
	printf("%- +20.10hd\n", i);
	printf("%--20.10hd\n", i);
	printf("PLUS:\n");
	printf("%+20.10hd\n", i);
	printf("%+-20.10hd\n", i);
	printf("%+#20.10hd\n", i);
	printf("%+020.10hd\n", i);
	printf("%+ 20.10hd\n", i);
	printf("%++20.10hd\n", i);
	printf("%020.10hd\n", i);

	// printf("%20.10hd\n", i);
	// printf("%-+20.10hd\n", i);
	// printf("% 020.10hd\n", i);
	// printf("%+020.10hd\n", i);
	// printf("%--20.10hd\n", i);
	// printf("%-020.10hd\n", i);
	// printf("% +20.10hd\n", i);





	return (0);
}
