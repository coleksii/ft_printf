/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:57:09 by coleksii          #+#    #+#             */
/*   Updated: 2017/02/28 17:27:45 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef	struct	s_print_list
{
	char			*flags;
	int				width;
	int				prec;
	char			size;
	char			type;
	char			*str;
}				t_plist;
typedef	char *(*fp)(t_plist *, va_list *);
int				ft_printf(const char *format, ...);
int				correct(char *s, int i, t_plist *lst);
int     parametres(t_plist *lst, va_list *argptr);
void    lst_bzero(t_plist *lst);
char     *decemical(t_plist *lst, va_list *argptr);
char            *ft_u_itoa(unsigned int n);
char        *u_decemical(t_plist *lst, va_list *argptr);

#endif
