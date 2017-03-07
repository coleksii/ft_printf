/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:57:09 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/07 17:33:54 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef	struct	s_print_list
{
	int				width;
	int				prec;
	char			size;
	char			type;
	char			*str;
	char			hash;
	char			plus;
	char			minus;
	char			nul;
}				t_plist;
typedef	char *(*t_p)(t_plist *, va_list *);
int				ft_printf(const char *format, ...);
int				correct(char *s, int i, t_plist *lst);
int     parametres(t_plist *lst, va_list *argptr);
void    lst_bzero(t_plist *lst);
char     *decemical(t_plist *lst, va_list *argptr);
char            *ft_u_itoa(unsigned int n);
char        *u_decemical(t_plist *lst, va_list *argptr);
char            *ft_itoa(int n);
int        ft_putstr(char const *str);
void        ft_putchar(char c);
char        *ft_base(t_plist *lst, va_list *argptr);
char    *ft_itoa_base_big(unsigned int nbr, int base, t_plist *lst);
char    *ft_itoa_base_small(unsigned int nbr, int base, t_plist *lst);

#endif
