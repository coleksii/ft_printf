/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 13:57:09 by coleksii          #+#    #+#             */
/*   Updated: 2017/04/01 15:56:53 by coleksii         ###   ########.fr       */
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
	int				space;
	int				negative;
}				t_plist;
typedef	char *(*t_p)(t_plist *, va_list *);
int				ft_printf(const char *format, ...);
int				correct(char *s, int i, t_plist *lst, va_list *argptr);
int     parametres(t_plist *lst, va_list *argptr);
void    lst_bzero(t_plist *lst);
char     *decemical(t_plist *lst, va_list *argptr);
char            *ft_u_itoa(uintmax_t n, t_plist *lst);
char        *u_decemical(t_plist *lst, va_list *argptr);
char            *ft_itoa(long int n, t_plist *lst);
int        ft_putstr(char const *str, t_plist *lst);
void        ft_putchar(char c);
char        *ft_base(t_plist *lst, va_list *argptr);
char    *ft_itoa_base_big(uintmax_t nbr, unsigned int base, t_plist *lst);
char    *ft_itoa_base_small(unsigned long int nbr, int base, t_plist *lst);
char	*fft_putchar(t_plist *lst, va_list *argptr);
char	*fft_putstr(t_plist *lst, va_list *argptr);
int     printable(t_plist *lst);
int		ft_strlen(char *str);
char    *ft_strndup(const char *s1, size_t n);
char    *ft_itoa_base_p(unsigned long int nbr, unsigned int base, t_plist *lst);
int     large(char *s, int *i, t_plist *lst);
char    *ft_itoa_base_o(uintmax_t nbr, unsigned int base, t_plist *lst);
char        *ft_base_o(t_plist *lst, va_list *argptr);
char        *ft_base_x(t_plist *lst, va_list *argptr);
char        *fft_putchar_C(t_plist *lst, va_list *argptr);
int     ft_w_char(int d, char *s);
char        *fft_putstr_S(t_plist *lst, va_list *argptr);
int     count_w(wchar_t *s);

#endif
