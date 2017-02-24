/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pustr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 13:02:24 by coleksii          #+#    #+#             */
/*   Updated: 2016/11/30 13:15:18 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putstr(char const *str)
{
	if (str)
	{
		while (*str != '\0')
		{
			ft_putchar(*str);
			str++;
		}
	}
}
