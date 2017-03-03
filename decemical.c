/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decemical.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 12:56:20 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/03 14:17:53 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*decemical(t_plist *lst, va_list *argptr)
{
	lst->str = ft_itoa(va_arg(*argptr, int));
	return (NULL);
}

char		*u_decemical(t_plist *lst, va_list *argptr)
{
	lst->str = ft_u_itoa(va_arg(*argptr, unsigned int));
	return (NULL);
}

char		*ft_base(t_plist *lst, va_list *argptr)
{
	if (lst->type == 'X')
		lst->str = ft_itoa_base_big(va_arg(*argptr, unsigned int), 16);
	else if (lst->type == 'x')
		lst->str = ft_itoa_base_small(va_arg(*argptr, unsigned int), 16);
	return (NULL);
}
