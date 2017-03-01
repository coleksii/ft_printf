/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 14:12:26 by coleksii          #+#    #+#             */
/*   Updated: 2017/02/28 17:47:55 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

static char		*plus(unsigned long int n)
{
	long int			i;
	unsigned long int		l;
	char		*str;

	l = n;
	i = 0;
	while (l >= 10)
	{
		l = l / 10;
		i++;
	}
	if (!(str = (char *)malloc(i + 2)))
		return (0);
	str[i + 1] = '\0';
	str[0] = '0';
	while (i >= 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	return (str);
}

char			*ft_u_itoa(unsigned int n)
{
	char		*str;
	unsigned long int	l;

	l = n;
	str = plus(l);
	return (str);
}
