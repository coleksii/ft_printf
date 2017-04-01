/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pustr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 13:02:24 by coleksii          #+#    #+#             */
/*   Updated: 2017/04/01 16:43:59 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putstr(char const *str, t_plist *lst)
{
	int		i;

	i = 0;
	if (*str == '\0' && (lst->type == 'c' || lst->type == 'C'))
		return (1);
	if (str)
	{
		while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
	}
	return (i);
}
