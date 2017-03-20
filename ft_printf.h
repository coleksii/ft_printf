/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:57:09 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/20 17:27:50 by coleksii         ###   ########.fr       */
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
char            *ft_itoa(int n, t_plist *lst);
int        ft_putstr(char const *str);
void        ft_putchar(char c);
char        *ft_base(t_plist *lst, va_list *argptr);
char    *ft_itoa_base_big(unsigned long int nbr, int base, t_plist *lst);
char    *ft_itoa_base_small(unsigned long int nbr, int base, t_plist *lst);
char	*fft_putchar(t_plist *lst, va_list *argptr);
char	*fft_putstr(t_plist *lst, va_list *argptr);
int     printable(t_plist *lst);
int		ft_strlen(char *str);
char    *ft_strndup(const char *s1, size_t n);
char    *ft_itoa_base_p(unsigned long int nbr, unsigned int base, t_plist *lst);

#endif
