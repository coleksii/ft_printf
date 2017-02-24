/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parametres.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 13:02:29 by coleksii          #+#    #+#             */
/*   Updated: 2017/02/24 20:34:37 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void function(t_plist *lst, va_list *argptr, int i)
{
	fp	farg[10];

	farg[0] = decemical;
	farg[i](lst, argptr);
}

int		parametres(t_plist *lst, va_list *argptr)
{
	int		i;
	char	*s;
	fp		f_arr[10];
	int ptr;

	s = "dioumxXcCsaAeEfFgGSpn";
	i = 0;
	f_arr[0] = decemical;
	while (s[i] != '\0')
	{
		if (lst->type == s[i])
			break ;
		i++;
	}
	function(lst, argptr, i);
	ft_putstr(lst->str);
	return (i);
}
