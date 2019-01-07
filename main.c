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
#include <float.h>

int		main()
{
	setlocale(LC_ALL, "");
	char	*c = "coucou";
	float	i = 42.4561571;

	// ft_printf("@moulitest: |%.o| |%.0o|\n", 0, 0);
	// ft_printf("@moulitest: |%5.o| |%5.0o|\n", 0, 0);
	// printf("@moulitest: |%.o| |%.0o|\n", 0, 0);
	// printf("@moulitest: |%5.o| |%5.0o|\n", 0, 0);

	// printf("nb print %30f\n", ft_printf("%s\n", NULL));
	// ft_printf("%s\n", NULL);
	// ft_printf("%s\n", NULL);
	// ft_printf("%s\n", NULL);


	// printf("nb print %30f\n", printf("%s\n", NULL));
	// printf("%s\n", NULL);
	// printf("%s\n", NULL);
	// printf("%s\n", NULL);

	//ft_printf("|salut %s|\n", c);
ft_printf("\n");
  ft_printf("%%\n");
  ft_printf("%d\n", 42);
  ft_printf("%d%d\n", 42, 41);
  ft_printf("%d%d%d\n", 42, 43, 44);
  ft_printf("%ld\n", 2147483647);
  ft_printf("%lld\n", 9223372036854775807);
  ft_printf("%x\n", 505);
  ft_printf("%X\n", 505);
  ft_printf("%p\n", &ft_printf);
  ft_printf("%20.15d\n", 54321);
  ft_printf("%-10d\n", 3);
  ft_printf("% d\n", 3);
  ft_printf("%+d\n", 3);
  ft_printf("%010d\n", 1);
  ft_printf("%hhd\n", 0);
  ft_printf("%jd\n", 9223372036854775807);
  ft_printf("%zd\n", 4294967295);
  ft_printf("%\n");
  ft_printf("%U\n", 4294967295);
  ft_printf("%u\n", 4294967295);
  ft_printf("%o\n", 40);
  ft_printf("%%#08x\n", 42);
  ft_printf("%x\n", 1000);
  ft_printf("%#X\n", 1000);
  ft_printf("%s\n", NULL);
  ft_printf("%S\n", L"ݗݜशব");
  ft_printf("%s%s\n", "test", "test");
  ft_printf("%s%s%s\n", "test", "test", "test");
  ft_printf("%C\n", 15000);

	ft_printf("{%#20.5x}\n", 1);

	// ft_printf("my ft_printf  \n");
	// ft_printf("MINUS:\n");
	// ft_printf("%-30f\n", i);
	// ft_printf("%-+30f\n", i);
	// ft_printf("%-#30f\n", i);
	// ft_printf("%- 30f\n", i);
	// ft_printf("%- +30f\n", i);
	// ft_printf("%--30f\n", i);
	// ft_printf("----------------------------------------\n");

	// ft_printf("my ft_printf  \n");
	// ft_printf("PLUS:\n");
	// ft_printf("%+30f\n", i);
	// ft_printf("%+-30f\n", i);
	// ft_printf("%+#30f\n", i);
	// ft_printf("%+030f\n", i);
	// ft_printf("%+ 30f\n", i);
	// ft_printf("%++30f\n", i);
	// ft_printf("%+-0 30f\n", i);
	// ft_printf("----------------------------------------\n");

	// ft_printf("my ft_printf  \n");
	// ft_printf("ZERO:\n");
	// ft_printf("%0+30f\n", i);
	// ft_printf("%0-30f\n", i);
	// ft_printf("%0#30f\n", i);
	// ft_printf("%0030f\n", i);
	// ft_printf("%0 30f\n", i);
	// ft_printf("%0 -30f\n", i);
	// ft_printf("----------------------------------------\n");

	// ft_printf("my ft_printf  \n");
	// ft_printf("SPACE:\n");
	// ft_printf("% +30f\n", i);
	// ft_printf("% -30f\n", i);
	// ft_printf("% #30f\n", i);
	// ft_printf("% 030f\n", i);
	// ft_printf("%  30f\n", i);
	// ft_printf("%  -30f\n", i);
	// ft_printf("----------------------------------------\n");
	// ft_printf("----------------------------------------\n");

	// printf("real printf :\n");
	// printf("MINUS:\n");
	// printf("%-30f\n", i);
	// printf("%-+30f\n", i);
	// printf("%-#30f\n", i);
	// printf("%- 30f\n", i);
	// printf("%- +30f\n", i);
	// printf("%--30f\n", i);
	// printf("----------------------------------------\n");

	// printf("real printf :\n");
	// printf("PLUS:\n");
	// printf("%+30f\n", i);
	// printf("%+-30f\n", i);
	// printf("%+#30f\n", i);
	// printf("%+030f\n", i);
	// printf("%+ 30f\n", i);
	// printf("%++30f\n", i);
	// printf("%+-0 30f\n", i);
	// printf("----------------------------------------\n");


	// printf("real printf :\n");
	// printf("ZERO:\n");
	// printf("%0+30f\n", i);
	// printf("%0-30f\n", i);
	// printf("%0#30f\n", i);
	// printf("%0030f\n", i);
	// printf("%0 30f\n", i);
	// printf("%0 -30f\n", i);
	// printf("----------------------------------------\n");


	// printf("SPACE:\n");
	// printf("% +30f\n", i);
	// printf("% -30f\n", i);
	// printf("% #30f\n", i);
	// printf("% 030f\n", i);
	// printf("%  30f\n", i);
	// printf("%  -30f\n", i);
	// printf("%s\n", NULL);
	// printf("%-+30f\n", i);
	// printf("% 030f\n", i);
	// printf("%+030f\n", i);
	// printf("%--30f\n", i);
	// printf("%-030f\n", i);
	// printf("% +30f\n", i);





	return (0);
}
