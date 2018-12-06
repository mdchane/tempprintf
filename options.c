/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 09:57:33 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/06 16:05:18 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_final(t_final *final)
{
	printf("\n---------------\nprint_final : \nstr = %s\nlarg_min = %d\ntaille = %d\ntype = %d\n",
		final->str, final->larg_min, final->taille, final->type);
	ft_foreach(final->options, NB_OPTIONS, ft_putnbr);
	printf("\n---------------\n");
}

t_final	*init_final_format()
{
	t_final *final;

	final = ft_memalloc(sizeof(t_final));
	final->str = ft_strnew(5);
	ft_print_final(final);
	return (final);
}

int		ft_options_cmp(t_final *final, const char *fm)
{
	int		i;

	i = 1;
	while (ft_is_options(fm[i]))
	{
		if (fm[i] == '-')
			final->options[MINUS] = 1;
		else if (fm[i] == '+')
			final->options[PLUS] = 1;
		else if (fm[i] == '#')
			final->options[DIESE] = 1;
		else if (fm[i] == '0')
			final->options[ZERO] = 1;
		else if (fm[i] == ' ')
			final->options[SPACE] = 1;
		i++;
	}
	printf("options i = %d\n", i);
	return (i - 1);
}

int		ft_larg_min(t_final *final, const char *fm)
{
	int		i;

	i = 0;
	printf("larg_min begin i = %d = %c\n", i, fm[i]);
	if (fm[i] == '%' || ft_is_options(fm[i]))
	{
		i++;
		while (fm[i] >= '0' && fm[i] <= '9')
		{
			final->larg_min = final->larg_min * 10 + fm[i] - '0';
			printf("larg_min = %d\n", final->larg_min);
			i++;
		}
	}
	printf("larg_min i last = %d\n", i);
	return (i);
}

int		ft_format(va_list va, const char *format)
{
	int		i;
	t_final	*final;

	(void)va;
	final = init_final_format();
	i = 0;
	i += ft_options_cmp(final, format);
	i += ft_larg_min(final, format + i);
	ft_print_final(final);
	return (i);
}
