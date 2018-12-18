/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 09:58:22 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/18 14:28:00 by mdchane          ###   ########.fr       */
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
	int		precision;
	int		modif[NB_MODIF];
	char	type;
}				t_final;

typedef int (*p_func)(t_final *, va_list);

int			ft_printf(const char *format, ...);



int			ft_get_options(t_final *final, const char *fm);
int			ft_get_larg_min(t_final *final, const char *fm);
int			ft_get_format(va_list va, const char *format, p_func  *tab);
int			ft_is_options(char c);
int			ft_is_modif(char c);


p_func		*init_tab_func();
int			print_format(va_list va, t_final *final, p_func  *tab);
void		put_n_char(char c, int n);

int			aff_char(t_final *final, va_list av);
int			aff_str(t_final *final, va_list av);
int			aff_ptr(t_final *final, va_list av);




#endif
