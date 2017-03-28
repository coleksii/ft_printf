/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printable.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 21:39:08 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/27 16:10:09 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		printable(t_plist *lst)
{
	int		i;
	int		k;
	char	l;

	k = 0;
	if (lst->type == 'c' && *(lst->str) == '\0')
		lst->width--;
	if (lst->nul && lst->prec == -2)
		l = 48;
	else
		l = ' ';
	i = ft_strlen(lst->str);
	if (lst->minus)
	{
		k += ft_putstr(lst->str, lst);
		while (lst->width-- - i > 0 && ++k)
			write(1, " ", 1);
	}
	else
	{
		while (lst->width-- - i > 0 && ++k)
			write(1, &l, 1);
		k += ft_putstr(lst->str, lst);
	}
	return (k);
}
