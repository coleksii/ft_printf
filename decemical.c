/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decemical.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 12:56:20 by coleksii          #+#    #+#             */
/*   Updated: 2017/02/28 17:26:53 by coleksii         ###   ########.fr       */
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
