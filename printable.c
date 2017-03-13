/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printable.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 21:39:08 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/13 16:57:36 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int 	printable(t_plist *lst)
{
	int		i;
	int		l;
	int		k;
	int		p;

	k = 0;
	i = ft_strlen(lst->str);
	l = lst->prec - i;
	p = (lst->prec > i) ? lst->prec  : i;
	if (lst->minus)
	{
		k += ft_putstr(lst->str);
		while (lst->width-- - i > 0 && ++k)
			write(1, " ", 1);
	}
	else
	{
		while (lst->width-- - i > 0 && ++k)
			write(1, " ", 1);
		k += ft_putstr(lst->str);
	}
	return (k);
}
