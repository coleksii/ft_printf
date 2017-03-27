/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   decemical.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 12:56:20 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/26 20:19:51 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char		*decemical(t_plist *lst, va_list *argptr)
{
	if (!lst->size)
		lst->str = ft_itoa(va_arg(*argptr, int), lst);
	else if (lst->size == 'l')
		lst->str = ft_itoa(va_arg(*argptr, long int), lst);
	else if (lst->size == 'T')
		lst->str = ft_itoa(va_arg(*argptr, long long int), lst);
	else if (lst->size == 'h')
		lst->str = ft_itoa((short)va_arg(*argptr, int), lst);
	else if (lst->size == 'H')
		lst->str = ft_itoa((char)va_arg(*argptr, int), lst);
	else if (lst->size == 'j')
		lst->str = ft_itoa(va_arg(*argptr, intmax_t), lst);
	else if (lst->size == 'z')
		lst->str = ft_itoa(va_arg(*argptr, size_t), lst);
	return (NULL);
}

char		*u_decemical(t_plist *lst, va_list *argptr)
{
	if (!lst->size)
		lst->str = ft_u_itoa(va_arg(*argptr, unsigned int), lst);
	else if (lst->size == 'l')
		lst->str = ft_u_itoa(va_arg(*argptr, unsigned  long int), lst);
	else if (lst->size == 'T')
		lst->str = ft_u_itoa(va_arg(*argptr, unsigned long long int), lst);
	else if (lst->size == 'h')
		lst->str = ft_u_itoa((short)va_arg(*argptr, unsigned int), lst);
	else if (lst->size == 'H')
		lst->str = ft_u_itoa((char)va_arg(*argptr, unsigned int), lst);
	else if (lst->size == 'j')
		lst->str = ft_u_itoa(va_arg(*argptr, uintmax_t), lst);
	else if (lst->size == 'z')
		lst->str = ft_u_itoa(va_arg(*argptr, size_t), lst);
	return (NULL);
}

char		*ft_base(t_plist *lst, va_list *argptr)
{
	unsigned long int l;

	if (lst->type == 'X' || lst->type == 'x')
	{
	if (!lst->size)
		lst->str = ft_itoa_base_big(va_arg(*argptr, unsigned int), 16, lst);
	else if (lst->size == 'l')
		lst->str = ft_itoa_base_big(va_arg(*argptr, unsigned long int), 16, lst);
	else if (lst->size == 'T')
		lst->str = ft_itoa_base_big(va_arg(*argptr, unsigned long long int), 16, lst);
	else if (lst->size == 'h')
		lst->str = ft_itoa_base_big((short)va_arg(*argptr, unsigned int), 16, lst);
	else if (lst->size == 'H')
		lst->str = ft_itoa_base_big((char)va_arg(*argptr, unsigned int), 16, lst);
	else if (lst->size == 'j')
		lst->str = ft_itoa_base_big(va_arg(*argptr, uintmax_t), 16, lst);
	else if (lst->size == 'z')
		lst->str = ft_itoa_base_big(va_arg(*argptr, size_t), 16, lst);
	}
	else if (lst->type == 'p')
	{
		l = (unsigned long int)va_arg(*argptr, void *); 
		lst->str = ft_itoa_base_p(l, 16, lst);
	}
	return (NULL);
}

char		*ft_base_x(t_plist *lst, va_list *argptr)
{
	if (!lst->size)
		lst->str = ft_itoa_base_big(va_arg(*argptr, unsigned int), 16, lst);
	else if (lst->size == 'l')
		lst->str = ft_itoa_base_big(va_arg(*argptr, unsigned long int), 16, lst);
	else if (lst->size == 'T')
		lst->str = ft_itoa_base_big(va_arg(*argptr, unsigned long long int), 16, lst);
	else if (lst->size == 'h')
		lst->str = ft_itoa_base_big((short)va_arg(*argptr, unsigned int), 16, lst);
	else if (lst->size == 'H')
		lst->str = ft_itoa_base_big((char)va_arg(*argptr, unsigned int), 16, lst);
	else if (lst->size == 'j')
		lst->str = ft_itoa_base_big(va_arg(*argptr, uintmax_t), 16, lst);
	else if (lst->size == 'z')
		lst->str = ft_itoa_base_big(va_arg(*argptr, size_t), 16, lst);
	return (NULL);
}

char		*ft_base_o(t_plist *lst, va_list *argptr)
{
	if (!lst->size)
		lst->str = ft_itoa_base_o(va_arg(*argptr, unsigned int), 8, lst);
	else if (lst->size == 'l')
		lst->str = ft_itoa_base_o(va_arg(*argptr, unsigned long int), 8, lst);
	else if (lst->size == 'T')
		lst->str = ft_itoa_base_o(va_arg(*argptr, unsigned long long int), 8, lst);
	else if (lst->size == 'h')
		lst->str = ft_itoa_base_o((short)va_arg(*argptr, unsigned int), 8, lst);
	else if (lst->size == 'H')
		lst->str = ft_itoa_base_o((char)va_arg(*argptr, unsigned int), 8, lst);
	else if (lst->size == 'j')
		lst->str = ft_itoa_base_o(va_arg(*argptr, uintmax_t), 8, lst);
	else if (lst->size == 'z')
		lst->str = ft_itoa_base_o(va_arg(*argptr, size_t), 8, lst);
	return (NULL);
}
