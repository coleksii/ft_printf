/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   correct2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/21 16:42:57 by coleksii          #+#    #+#             */
/*   Updated: 2017/04/01 19:12:59 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		large(char *s, int *i, t_plist *lst)
{
	/*if ((s[*i] == 'l' && s[*i + 1] == 'l') && (lst->size = 'T'))
		*i += 2;
	else if ((s[*i] == 'h' && s[*i + 1] == 'h') && (lst->size = 'H'))
		*i += 2;
	else if ((s[*i] == 'l' || s[*i] == 'h' || s[*i] == 'j' || s[*i] == 'z'
				|| s[*i] == 't' || s[*i] == 'L') && (lst->size = s[*i]))
		++*i;*/
	if ((s[*i] == 'h' && s[*i + 1] != 'h' &&  ++*i && lst->size < 1))
				lst->size = 1;
	else if (s[*i] == 'h' && s[*i + 1] == 'h' && (*i += 2) && lst->size < 2)
				lst->size = 2;
	else if (s[*i] == 'l' && s[*i + 1] != 'l' && ++*i && lst->size < 3)
		lst->size = 3;
	else if ((s[*i] == 'l' && s[*i + 1] == 'l'&& (*i += 2) && lst->size < 4))
			   	lst->size = 4;
	else if ((s[*i] == 'z' &&  ++*i && lst->size < 5))
		lst->size = 5;
	else if ((s[*i] == 'j' && ++*i && lst->size < 6))
		lst->size = 6;
	return (*i);

}
