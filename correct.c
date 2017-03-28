/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corrector.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 18:00:57 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/27 19:54:02 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		flags(char *s, t_plist *lst)
{
	int	i;

	i = 0;
	while (s[i] == '-' || s[i] == '+' || s[i] == ' ' || s[i] == '#' || s[i] == '0')
	{
		if (s[i] == '#')
			lst->hash = '#';
		if (s[i] == '-')
			lst->minus = '-';
		if (s[i] == '+')
			lst->plus = '+';
		if (s[i] == '0')
			lst->nul = '+';
		if (s[i] == ' ')
			lst->space = 1;
		i++;
	}
	return(i);
}

int		width(char *s, t_plist *lst, va_list *argptr)
{
	int i;

	lst->width = 0;
	i = 0;
	if (s[i] == '*' && (lst->width = va_arg(*argptr, int)))
		return (1);
	while (s[i] >= 47 && s[i] < 58)
		lst->width = (lst->width * 10) + (s[i++] - 48);
	return (i);	
}

int		preci(char *s, t_plist *lst, va_list *argptr)
{
	int	i;

	i = 1;
	lst->prec = 0;
	i = 1;
	if (s[i] == '*' && (lst->prec = va_arg(*argptr, int)))
		return (2);
	if (s[i] < 47 && s[i] >= 58 && (lst->prec = 0))
		return (1);
	while (s[i] >= 47 && s[i] < 58)
		lst->prec = (lst->prec * 10) + (s[i++] - 48);
	lst->nul = 0; //если есть точность то флаг ноль не обрабатывает
	return (i);
}

int		type(char *s, int *i, t_plist *lst)
{
	if ((s[*i] == 'd' || s[*i] == 'i' || s[*i] == 'o' || s[*i] == 'u' ||
			s[*i] == 'm' || s[*i] == 'x' || s[*i] == 'X' || s[*i] == 'c' ||
		   	s[*i] == 'C' || s[*i] == 's' || s[*i] == 'a' || s[*i] == 'A' ||
			s[*i] == 'e' || s[*i] == 'E' || s[*i] == 'f' || s[*i] == 'F' ||
			s[*i] == 'g' || s[*i] == 'G' || s[*i] == 'S' || s[*i] == 'p' ||
			s[*i] == 'n' || s[*i] == 'D' || s[*i] == '%' || s[*i] == 'O' ||
			(s[*i] == 'U' && (lst->size = 'l'))) && (lst->type = s[*i]))
		return (++*i);
	return (0);
}

int 	correct(char *s, int i, t_plist *lst, va_list *argptr) // к хуям неправилно работает
{
	int t;

	t = i;
	i++;
	lst_bzero(lst);
	while (t < i)
	{
		t = i;
	if (s[i] == '-' || s[i] == '+' || s[i] == ' ' || s[i] == '#' || s[i] == '0')
		i += flags(&s[i], lst);
	if ((s[i] > 47 && s[i] < 58) || s[i] == '*')
		i += width(&s[i], lst, argptr);
	if ((s[i] == '.') || (s[i + 1] == '*'))
		i += preci(&s[i], lst, argptr);
	large(s, &i, lst);
	}
	if (type(s, &i, lst))
		return (i);
	return (0);
}
