/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_format.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/05 09:57:33 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/18 15:25:15 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_final(t_final *final)
{
	printf("\n---------------\nprint_final : \nlarg_min = %d\nprecision = %d\ntype = %c\n",
	final->larg_min, final->precision, final->type);
	printf("options:\n-+#0s\n");
	ft_foreach(final->options, NB_OPTIONS, ft_putnbr);
	printf("\nmodif:\nhlL\n");
	ft_foreach(final->modif, NB_MODIF, ft_putnbr);
	printf("\n---------------\n");
}

t_final	*init_final_format()
{
	t_final *final;

	final = ft_memalloc(sizeof(t_final));
	return (final);
}

int		ft_get_options(t_final *final, const char *fm)
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
		final->options[ONE_OPT] = 1;
	}
	if (final->options[PLUS])
		final->options[SPACE] = 0;
	if (final->options[MINUS])
		final->options[ZERO] = 0;
	return (i - 1);
}

int		ft_get_larg_min(t_final *final, const char *fm)
{
	int		i;

	i = 0;
	if (fm[i] == '%' || ft_is_options(fm[i]))
	{
		i++;
		while (ft_isdigit(fm[i]))
		{
			final->larg_min = final->larg_min * 10 + fm[i] - '0';
			i++;
		}
	}
	return (i - 1);
}

int		ft_get_precision(t_final *final, const char *fm)
{
	int		i;

	i = 0;
	if (fm[i] == '%' || ft_is_options(fm[i]) || ft_isdigit(fm[i]))
	{
		i++;
		if (fm[i] == '.')
		{
			i++;
			while (ft_isdigit(fm[i]))
			{
				final->precision = final->precision * 10 + fm[i] - '0';
				i++;
			}
		}
	}
	return (i - 1);
}

int		ft_get_modif(t_final *final, const char *fm)
{
	int		i;

	i = 0;
	if (fm[i] == '%' || ft_is_options(fm[i]) || ft_isdigit(fm[i]))
	{
		i++;
		while (ft_is_modif(fm[i]))
		{
			if (fm[i] == 'h' && fm[i + 1] == 'h')
				final->modif[h] = 2;
			else if (fm[i] == 'h' && final->modif[h] != 2)
				final->modif[h] = 1;
			else if (fm[i] == 'l')
				final->modif[l] = 1;
			else if (fm[i] == 'L')
				final->modif[L] = 1;
			i++;
		}
	}
	return (i - 1);
}

int		ft_get_type(t_final *final, const char *fm)
{
	int		i;

	i = 0;
	if (fm[i] == '%' || ft_is_options(fm[i]) || ft_isdigit(fm[i]) || ft_is_modif(fm[i]))
	{
		i++;
		final->type = fm[i];
	}
	return (i + 1);
}

int		ft_get_format(va_list va, const char *format, p_func  *tab)
{
	int		i;
	t_final	*final;

	final = init_final_format();
	i = 0;
	i += ft_get_options(final, format);
	i += ft_get_larg_min(final, format + i);
	i += ft_get_precision(final, format + i);
	i += ft_get_modif(final, format + i);
	i += ft_get_type(final, format + i);
	print_format(va, final, tab);
	return (i - 1);
}
