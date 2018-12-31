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
	int		i = 0;

	// ft_printf("@moulitest: |%.o| |%.0o|\n", 0, 0);
	// ft_printf("@moulitest: |%5.o| |%5.0o|\n", 0, 0);
	// printf("@moulitest: |%.o| |%.0o|\n", 0, 0);
	// printf("@moulitest: |%5.o| |%5.0o|\n", 0, 0);

	// printf("nb print %5o\n", ft_printf("%s\n", NULL));
	// ft_printf("%s\n", NULL);
	// ft_printf("%s\n", NULL);
	// ft_printf("%s\n", NULL);


	// printf("nb print %5o\n", printf("%s\n", NULL));
	// printf("%s\n", NULL);
	// printf("%s\n", NULL);
	// printf("%s\n", NULL);



	ft_printf("my ft_printf  \n");
	ft_printf("MINUS:\n");
	ft_printf("%-5o\n", i);
	ft_printf("%-+5o\n", i);
	ft_printf("%-#5o\n", i);
	ft_printf("%- 5o\n", i);
	ft_printf("%- +5o\n", i);
	ft_printf("%--5o\n", i);
	ft_printf("----------------------------------------\n");



	ft_printf("my ft_printf  \n");
	ft_printf("PLUS:\n");
	ft_printf("%+5o\n", i);
	ft_printf("%+-5o\n", i);
	ft_printf("%+#5o\n", i);
	ft_printf("%+05o\n", i);
	ft_printf("%+ 5o\n", i);
	ft_printf("%++5o\n", i);
	ft_printf("%+-0 5o\n", i);
	ft_printf("----------------------------------------\n");

	ft_printf("my ft_printf  \n");
	ft_printf("ZERO:\n");
	ft_printf("%0+5o\n", i);
	ft_printf("%0-5o\n", i);
	ft_printf("%0#5o\n", i);
	ft_printf("%005o\n", i);
	ft_printf("%0 5o\n", i);
	ft_printf("%0 -5o\n", i);
	ft_printf("----------------------------------------\n");

	ft_printf("my ft_printf  \n");
	ft_printf("SPACE:\n");
	ft_printf("% +5o\n", i);
	ft_printf("% -5o\n", i);
	ft_printf("% #5o\n", i);
	ft_printf("% 05o\n", i);
	ft_printf("%  5o\n", i);
	ft_printf("%  -5o\n", i);
	ft_printf("----------------------------------------\n");
	ft_printf("----------------------------------------\n");

	printf("real printf :\n");
	printf("MINUS:\n");
	printf("%-5o\n", i);
	printf("%-+5o\n", i);
	printf("%-#5o\n", i);
	printf("%- 5o\n", i);
	printf("%- +5o\n", i);
	printf("%--5o\n", i);
	printf("----------------------------------------\n");

	printf("real printf :\n");
	printf("PLUS:\n");
	printf("%+5o\n", i);
	printf("%+-5o\n", i);
	printf("%+#5o\n", i);
	printf("%+05o\n", i);
	printf("%+ 5o\n", i);
	printf("%++5o\n", i);
	printf("%+-0 5o\n", i);
	printf("----------------------------------------\n");


	printf("real printf :\n");
	printf("ZERO:\n");
	printf("%0+5o\n", i);
	printf("%0-5o\n", i);
	printf("%0#5o\n", i);
	printf("%005o\n", i);
	printf("%0 5o\n", i);
	printf("%0 -5o\n", i);
	printf("----------------------------------------\n");


	printf("SPACE:\n");
	printf("% +5o\n", i);
	printf("% -5o\n", i);
	printf("% #5o\n", i);
	printf("% 05o\n", i);
	printf("%  5o\n", i);
	printf("%  -5o\n", i);
	// printf("%s\n", NULL);
	// printf("%-+5o\n", i);
	// printf("% 05o\n", i);
	// printf("%+05o\n", i);
	// printf("%--5o\n", i);
	// printf("%-05o\n", i);
	// printf("% +5o\n", i);





	return (0);
}
