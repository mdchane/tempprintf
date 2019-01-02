/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 09:58:22 by mdchane           #+#    #+#             */
/*   Updated: 2019/01/02 10:37:59 by mdchane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <wchar.h>
# include "libft/libft.h"

typedef enum	e_types
{
	INT = 0, FLOAT, CHAR, STR, NB_TYPES, NO_TYPE
}				t_types;

typedef enum	s_options
{
	MINUS = 0, PLUS, DIESE, ZERO , SPACE, ONE_OPT, NB_OPTIONS
}				t_options;

typedef enum	s_modif
{
	h = 0, l, L, NB_MODIF
}				t_modif;

typedef struct s_final
{
	va_list	va;
	int		options[NB_OPTIONS];
	int		larg_min;
	int		preci;
	int		modif[NB_MODIF];
	char	type;
	int		nb_print;
}				t_final;

typedef int (*p_func)(t_final *, va_list);

int			ft_printf(const char *format, ...);

t_final	*	init_final_format();
void		ft_print_final(t_final *final);
int			ft_get_options(t_final *final, const char *fm);
int			ft_get_larg_min(t_final *final, const char *fm);
int			ft_is_options(char c);
int			ft_is_modif(char c);
int			ft_get_format(const char *format, t_final *final);


p_func		*init_tab_func();
int			print_format(va_list va, const char *format, p_func *tab, size_t *nb_print);
char		*int_with_precision(char *str, int preci);
intmax_t	cast_u(t_final *final, va_list av);


int			aff_percent(t_final *final, va_list va);
int			aff_char(t_final *final, va_list av);
int			aff_str(t_final *final, va_list av);
int			aff_ptr(t_final *final, va_list av);
int			aff_int(t_final *final, va_list av);
int			aff_uint(t_final *fl, va_list av);
int			aff_oct(t_final *fl, va_list av);
int			aff_deci(t_final *fl, va_list av);


#endif
