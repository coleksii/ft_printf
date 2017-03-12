/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fft.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/07 18:17:51 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/07 19:30:06 by coleksii         ###   ########.fr       */
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

char		*fft_putstr(t_plist *lst, va_list *argptr)
{
	lst->str = va_arg(*argptr, char *);
	return (NULL);
}
