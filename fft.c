/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fft.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 18:17:51 by coleksii          #+#    #+#             */
/*   Updated: 2017/04/01 19:52:21 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*fft_putchar(t_plist *lst, va_list *argptr)
{
	char *s;

	s = (char *)malloc(2);
	s[0] = va_arg(*argptr, int);
	s[1] = '\0';
	lst->str = s;
	return (NULL);
}

char		*fft_putstr_S(t_plist *lst, va_list *argptr)
{
	wchar_t	*s;
	int		i;
	int		l;

	s = va_arg(*argptr, wchar_t *);
	i = 0;
	l = 0;
	i = count_w(s);
	lst->str = (char *)malloc(i + 1);
	lst->str[i] = '\0';
	i = 0;
	while (s[i] != '\0')
	{
		l += ft_w_char(s[i], &lst->str[l], &lst->prec);
		i++;
	}
	return (NULL);
}

char		*fft_putchar_C(t_plist *lst, va_list *argptr)
{
	int	d;
	int l;

	l = -2;
	d = va_arg(*argptr, int);
	lst->str = (char *)malloc(sizeof(d));
	ft_w_char(d, lst->str, &l);
	return(NULL);
}

char		*fft_putstr(t_plist *lst, va_list *argptr)
{
	char *s;

	s = va_arg(*argptr, char *);
	if (lst->prec != -2 && s != NULL)
		lst->str = ft_strndup(s, lst->prec);
	else
		lst->str = s;
	if (lst->str == NULL)
		lst->str = "(null)";
	return (NULL);
}
