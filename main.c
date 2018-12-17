/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 10:30:59 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/17 14:26:10 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

int		main()
{
	wint_t	i = 'l';
	char	c = 'o';

	ft_printf("my printf :\nc : %c et z : %lc\n", i, i);
	ft_printf("%c\n", c);
	ft_printf("%+10c\n", c);
	ft_printf("%-10c\n", c);
	ft_printf("% 10c\n", c);
	ft_printf("%010c\n", c);
	ft_printf("%#10c\n", c);
	ft_printf("%10c\n", c);
	printf("real printf :\nc : %c et z : %lc\n", i, i);
	printf("%c\n", c);
	printf("%+10c\n", c);
	printf("%-10c\n", c);
	printf("% 10c\n", c);
	printf("%010c\n", c);
	printf("%#10c\n", c);
	printf("%10c\n", c);
	return (0);
}
