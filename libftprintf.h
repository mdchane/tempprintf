/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdchane <mdchane@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 09:58:22 by mdchane           #+#    #+#             */
/*   Updated: 2018/12/06 16:01:23 by mdchane          ###   ########.fr       */
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

typedef struct s_final
{
	char	*str;
	int		options[NB_OPTIONS];
	int		larg_min;
	char	taille;
	char	type;
}				t_final;


int			ft_printf(const char *format, ...);
int			aff_str(va_list av);
int			aff_char(va_list av);
int			aff_int(va_list av);
void		ft_format_cmp(va_list av, char c);
int			ft_format(va_list va, const char *format);
void		ft_intit_options(int	*tab[NB_OPTIONS]);
int			ft_is_options(char c);

#endif
