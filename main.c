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
	float	i = -42.456157;

	// ft_printf("@moulitest: |%.o| |%.0o|\n", 0, 0);
	// ft_printf("@moulitest: |%5.o| |%5.0o|\n", 0, 0);
	// printf("@moulitest: |%.o| |%.0o|\n", 0, 0);
	// printf("@moulitest: |%5.o| |%5.0o|\n", 0, 0);

	// printf("nb print %30p\n", ft_printf("%s\n", NULL));
	// ft_printf("%s\n", NULL);
	// ft_printf("%s\n", NULL);
	// ft_printf("%s\n", NULL);


	// printf("nb print %30p\n", printf("%s\n", NULL));
	// printf("%s\n", NULL);
	// printf("%s\n", NULL);
	// printf("%s\n", NULL);



	// ft_printf("my ft_printf  \n");
	// ft_printf("MINUS:\n");
	// ft_printf("%-30p\n", i);
	// ft_printf("%-+30p\n", i);
	// ft_printf("%-#30p\n", i);
	// ft_printf("%- 30p\n", i);
	// ft_printf("%- +30p\n", i);
	// ft_printf("%--30p\n", i);
	// ft_printf("----------------------------------------\n");

	ft_printf("salut %f\n\n", FLT_MAX);
	ft_printf("salut %lf\n\n", DBL_MAX);
	ft_printf("salut %Lf\n\n", LDBL_MAX);

	printf("real \n");
	printf("salut %f\n\n", FLT_MAX);
	printf("salut %lf\n\n", DBL_MAX);
	printf("salut %Lf\n", LDBL_MAX);


	

	// ft_printf("my ft_printf  \n");
	// ft_printf("PLUS:\n");
	// ft_printf("%+30p\n", i);
	// ft_printf("%+-30p\n", i);
	// ft_printf("%+#30p\n", i);
	// ft_printf("%+030p\n", i);
	// ft_printf("%+ 30p\n", i);
	// ft_printf("%++30p\n", i);
	// ft_printf("%+-0 30p\n", i);
	// ft_printf("----------------------------------------\n");

	// ft_printf("my ft_printf  \n");
	// ft_printf("ZERO:\n");
	// ft_printf("%0+30p\n", i);
	// ft_printf("%0-30p\n", i);
	// ft_printf("%0#30p\n", i);
	// ft_printf("%0030p\n", i);
	// ft_printf("%0 30p\n", i);
	// ft_printf("%0 -30p\n", i);
	// ft_printf("----------------------------------------\n");

	// ft_printf("my ft_printf  \n");
	// ft_printf("SPACE:\n");
	// ft_printf("% +30p\n", i);
	// ft_printf("% -30p\n", i);
	// ft_printf("% #30p\n", i);
	// ft_printf("% 030p\n", i);
	// ft_printf("%  30p\n", i);
	// ft_printf("%  -30p\n", i);
	// ft_printf("----------------------------------------\n");
	// ft_printf("----------------------------------------\n");

	// printf("real printf :\n");
	// printf("MINUS:\n");
	// printf("%-30p\n", i);
	// printf("%-+30p\n", i);
	// printf("%-#30p\n", i);
	// printf("%- 30p\n", i);
	// printf("%- +30p\n", i);
	// printf("%--30p\n", i);
	// printf("----------------------------------------\n");

	// printf("real printf :\n");
	// printf("PLUS:\n");
	// printf("%+30p\n", i);
	// printf("%+-30p\n", i);
	// printf("%+#30p\n", i);
	// printf("%+030p\n", i);
	// printf("%+ 30p\n", i);
	// printf("%++30p\n", i);
	// printf("%+-0 30p\n", i);
	// printf("----------------------------------------\n");


	// printf("real printf :\n");
	// printf("ZERO:\n");
	// printf("%0+30p\n", i);
	// printf("%0-30p\n", i);
	// printf("%0#30p\n", i);
	// printf("%0030p\n", i);
	// printf("%0 30p\n", i);
	// printf("%0 -30p\n", i);
	// printf("----------------------------------------\n");


	// printf("SPACE:\n");
	// printf("% +30p\n", i);
	// printf("% -30p\n", i);
	// printf("% #30p\n", i);
	// printf("% 030p\n", i);
	// printf("%  30p\n", i);
	// printf("%  -30p\n", i);
	// printf("%s\n", NULL);
	// printf("%-+30p\n", i);
	// printf("% 030p\n", i);
	// printf("%+030p\n", i);
	// printf("%--30p\n", i);
	// printf("%-030p\n", i);
	// printf("% +30p\n", i);





	return (0);
}
