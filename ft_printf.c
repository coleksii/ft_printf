/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 17:51:16 by coleksii          #+#    #+#             */
/*   Updated: 2017/02/24 20:34:39 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list argptr;
	int		i;
	int		k;
	t_plist	*lst;

	va_start(argptr, format);	
	lst = (t_plist *)malloc(sizeof(t_plist));
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '%' && (i += 2))
			write(1, "%", 1);
		if (format[i] == '%' && (k = correct((char *)format, i, lst)))
		{
			i = k;
			if (lst->width == -1)
				lst->width = va_arg(argptr, int);
			if (lst->prec == -1)
				lst->prec = va_arg(argptr, int);
			parametres(lst, &argptr);
//		printf("flags = %s\n", lst->flags);
//		printf("width = %d\n", lst->width);
//		printf("prec = %d\n", lst->prec);
//		printf("size = %c\n", lst->size);
//		printf("type = %c\n", lst->type);
		}
		write(1, &format[i], 1);
		i++;
	}
	va_end(argptr);
	return (i);
}
