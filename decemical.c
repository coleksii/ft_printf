/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decemical.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 12:56:20 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/20 17:29:11 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*decemical(t_plist *lst, va_list *argptr)
{
	lst->str = ft_itoa(va_arg(*argptr, int), lst);
	return (NULL);
}

char		*u_decemical(t_plist *lst, va_list *argptr)
{
	lst->str = ft_u_itoa(va_arg(*argptr, unsigned int));
	return (NULL);
}

char		*ft_base(t_plist *lst, va_list *argptr)
{
	unsigned long int l;

	if (lst->type == 'X')
		lst->str = ft_itoa_base_big(va_arg(*argptr, unsigned int), 16, lst);
	else if (lst->type == 'x')
		lst->str = ft_itoa_base_small(va_arg(*argptr, unsigned int), 16, lst);
	else if (lst->type == 'O')
		lst->str = ft_itoa_base_big(va_arg(*argptr, unsigned int), 8, lst);
	else if (lst->type == 'o')
		lst->str = ft_itoa_base_small(va_arg(*argptr, unsigned int), 8, lst);
	else if (lst->type == 'p')
	{
		l = (unsigned long int)va_arg(*argptr, void *); 
		lst->str = ft_itoa_base_p(l, 16, lst);
	}
	return (NULL);
}
