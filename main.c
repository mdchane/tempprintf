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
	int		i = 42;

	// ft_printf("%10.0s\n", c);
	// ft_printf("%10.1s\n", c);
	// ft_printf("%10.2s\n", c);
	// ft_printf("%10.3s\n", c);


	printf("%10s\n", c);
	printf("%10.0s\n", c);
	printf("%10.2s\n", c);
	printf("%10.3s\n", c);



	// ft_printf("my ft_printf  \n");
	// ft_printf("MINUS:\n");
	// ft_printf("%-o\n", i);
	// ft_printf("%-+o\n", i);
	// ft_printf("%-#o\n", i);
	// ft_printf("%- o\n", i);
	// ft_printf("%- +o\n", i);
	// ft_printf("%--o\n", i);
	// ft_printf("----------------------------------------\n");



	// ft_printf("my ft_printf  \n");
	// ft_printf("PLUS:\n");
	// ft_printf("%+o\n", i);
	// ft_printf("%+-o\n", i);
	// ft_printf("%+#o\n", i);
	// ft_printf("%+0o\n", i);
	// ft_printf("%+ o\n", i);
	// ft_printf("%++o\n", i);
	// ft_printf("%+-0 o\n", i);
	// ft_printf("----------------------------------------\n");

	// ft_printf("my ft_printf  \n");
	// ft_printf("ZERO:\n");
	// ft_printf("%0+o\n", i);
	// ft_printf("%0-o\n", i);
	// ft_printf("%0#o\n", i);
	// ft_printf("%00o\n", i);
	// ft_printf("%0 o\n", i);
	// ft_printf("%0 -o\n", i);
	// ft_printf("----------------------------------------\n");

	// ft_printf("my ft_printf  \n");
	// ft_printf("SPACE:\n");
	// ft_printf("% +o\n", i);
	// ft_printf("% -o\n", i);
	// ft_printf("% #o\n", i);
	// ft_printf("% 0o\n", i);
	// ft_printf("%  o\n", i);
	// ft_printf("%  -o\n", i);
	// ft_printf("----------------------------------------\n");
	// ft_printf("----------------------------------------\n");

	// printf("real printf :\n");
	// printf("MINUS:\n");
	// printf("%-o\n", i);
	// printf("%-+o\n", i);
	// printf("%-#o\n", i);
	// printf("%- o\n", i);
	// printf("%- +o\n", i);
	// printf("%--o\n", i);
	// printf("----------------------------------------\n");

	// printf("real printf :\n");
	// printf("PLUS:\n");
	// printf("%+o\n", i);
	// printf("%+-o\n", i);
	// printf("%+#o\n", i);
	// printf("%+0o\n", i);
	// printf("%+ o\n", i);
	// printf("%++o\n", i);
	// printf("%+-0 o\n", i);
	// printf("----------------------------------------\n");


	// printf("real printf :\n");
	// printf("ZERO:\n");
	// printf("%0+o\n", i);
	// printf("%0-o\n", i);
	// printf("%0#o\n", i);
	// printf("%00o\n", i);
	// printf("%0 o\n", i);
	// printf("%0 -o\n", i);
	// printf("----------------------------------------\n");


	// printf("SPACE:\n");
	// printf("% +o\n", i);
	// printf("% -o\n", i);
	// printf("% #o\n", i);
	// printf("% 0o\n", i);
	// printf("%  o\n", i);
	// printf("%  -o\n", i);
	// printf("%o\n", i);
	// printf("%-+o\n", i);
	// printf("% 0o\n", i);
	// printf("%+0o\n", i);
	// printf("%--o\n", i);
	// printf("%-0o\n", i);
	// printf("% +o\n", i);





	return (0);
}
