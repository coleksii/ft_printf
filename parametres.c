/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parametres.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/22 13:02:29 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/03 14:17:42 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void function(t_plist *lst, va_list *argptr, int i)
{
	fp	farg[10];

	farg[0] = decemical;
	farg[1] = decemical;
	farg[2] = decemical;
	farg[4] = u_decemical;
	farg[6] = ft_base;
	farg[7] = ft_base;
	farg[i](lst, argptr);
}

int		parametres(t_plist *lst, va_list *argptr)
{
	int		i;
	char	*s;

	s = "dDioumxXcCsaAeEfFgGSpn";
	i = 0;
	while (s[i] != '\0')
	{
		if (lst->type == s[i])
			break ;
		i++;
	}
	function(lst, argptr, i);
	i = ft_putstr(lst->str);
	return (i);
}
