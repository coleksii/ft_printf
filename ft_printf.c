/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 17:51:16 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/27 20:01:12 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list argptr;
	int		i;
	int		k;
	int		l;
	t_plist	*lst;

	va_start(argptr, format);	
	lst = (t_plist *)malloc(sizeof(t_plist));
	i = 0;
	l = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && (k = correct((char *)format, i, lst, &argptr)))
		{
			i = k - 1;
			l = l +	parametres(lst, &argptr);
//		printf("flags = %s\n", lst->flags);
//		printf("width = %d\n", lst->width);
//		printf("prec = %d\n", lst->prec);
//		printf("size = %c\n", lst->size);
//		printf("hash = %c\n", lst->hash);
		}
		else if (++l)
			write(1, &format[i], 1);
		i++;
	}
	va_end(argptr);
	return (l);
}
