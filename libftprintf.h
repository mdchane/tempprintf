/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchane <dchane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 09:58:22 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/14 16:29:00 by dchane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include "libft/libft.h"

typedef int (*p_func)(va_list);

typedef enum	e_types
{
	INT = 0, FLOAT, CHAR, STR, NB_FORMATS, NO_FORMAT
}				t_types;

typedef enum	s_options
{
	MINUS = 0, PLUS, DIESE, ZERO , SPACE, NB_OPTIONS
}				t_options;

typedef enum	s_modif
{
	h = 0, l, L, NB_MODIF
}				t_modif;

typedef int (*p_func)(va_list);

typedef struct s_final
{
	int		options[NB_OPTIONS];
	int		larg_min;
	int		precision;
	int		modif[NB_MODIF];
	char	type;
}				t_final;

int			ft_printf(const char *format, ...);

int			aff_str(va_list av);
int			aff_char(va_list av);
int			aff_int(va_list av);

int			ft_get_options(t_final *final, const char *fm);
int			ft_get_larg_min(t_final *final, const char *fm);
int			ft_get_format(va_list va, const char *format, p_func  *tab[NB_FORMATS]);
int			ft_is_options(char c);
int			ft_is_modif(char c);
void    	init_tab_func(p_func  *tab[NB_FORMATS]);
int    	 	print_format(va_list va, t_final *final, p_func  *tab[NB_FORMATS]);
#endif
