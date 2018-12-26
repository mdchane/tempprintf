/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 10h18/12/01 10h:30:59 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/26 11:22:05 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"
#include <locale.h>

int		main()
{
	setlocale(LC_ALL, "");
	char	*c = "coucou";
	int		i = 5214;


	ft_printf("my ft_printf  \n");
	ft_printf("MINUS:\n");
	ft_printf("%-10.5u\n", i);
	ft_printf("%-+10.5u\n", i);
	ft_printf("%-#10.5u\n", i);
	ft_printf("%- 10.5u\n", i);
	ft_printf("%- +10.5u\n", i);
	ft_printf("%--10.5u\n", i);
	ft_printf("----------------------------------------\n");



	ft_printf("my ft_printf  \n");
	ft_printf("PLUS:\n");
	ft_printf("%+10.5u\n", i);
	ft_printf("%+-10.5u\n", i);
	ft_printf("%+#10.5u\n", i);
	ft_printf("%+010.5u\n", i);
	ft_printf("%+ 10.5u\n", i);
	ft_printf("%++10.5u\n", i);
	ft_printf("%+-0 10.5u\n", i);
	ft_printf("----------------------------------------\n");

	ft_printf("my ft_printf  \n");
	ft_printf("ZERO:\n");
	ft_printf("%0+10.5u\n", i);
	ft_printf("%0-10.5u\n", i);
	ft_printf("%0#10.5u\n", i);
	ft_printf("%0010.5u\n", i);
	ft_printf("%0 10.5u\n", i);
	ft_printf("%0 -10.5u\n", i);
	ft_printf("----------------------------------------\n");

	ft_printf("my ft_printf  \n");
	ft_printf("SPACE:\n");
	ft_printf("% +10.5u\n", i);
	ft_printf("% -10.5u\n", i);
	ft_printf("% #10.5u\n", i);
	ft_printf("% 010.5u\n", i);
	ft_printf("%  10.5u\n", i);
	ft_printf("%  -10.5u\n", i);
	ft_printf("----------------------------------------\n");
	ft_printf("----------------------------------------\n");

	printf("real printf :\n");
	printf("MINUS:\n");
	printf("%-10.5u\n", i);
	printf("%-+10.5u\n", i);
	printf("%-#10.5u\n", i);
	printf("%- 10.5u\n", i);
	printf("%- +10.5u\n", i);
	printf("%--10.5u\n", i);
	printf("----------------------------------------\n");

	printf("real printf :\n");
	printf("PLUS:\n");
	printf("%+10.5u\n", i);
	printf("%+-10.5u\n", i);
	printf("%+#10.5u\n", i);
	printf("%+010.5u\n", i);
	printf("%+ 10.5u\n", i);
	printf("%++10.5u\n", i);
	printf("%+-0 10.5u\n", i);
	printf("----------------------------------------\n");


	printf("real printf :\n");
	printf("ZERO:\n");
	printf("%0+10.5u\n", i);
	printf("%0-10.5u\n", i);
	printf("%0#10.5u\n", i);
	printf("%0010.5u\n", i);
	printf("%0 10.5u\n", i);
	printf("%0 -10.5u\n", i);
	printf("----------------------------------------\n");


	printf("SPACE:\n");
	printf("% +10.5u\n", i);
	printf("% -10.5u\n", i);
	printf("% #10.5u\n", i);
	printf("% 010.5u\n", i);
	printf("%  10.5u\n", i);
	printf("%  -10.5u\n", i);
	// printf("%10.5u\n", i);
	// printf("%-+10.5u\n", i);
	// printf("% 010.5u\n", i);
	// printf("%+010.5u\n", i);
	// printf("%--10.5u\n", i);
	// printf("%-010.5u\n", i);
	// printf("% +10.5u\n", i);





	return (0);
}
