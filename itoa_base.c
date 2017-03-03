/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 13:46:03 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/03 14:16:03 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *ft_itoa_base_big(unsigned int nbr, int base)
{
	long int    n;
	int         i;
	long int    l;
	char        *no;

	n = nbr;
	l = nbr;
	i = 0;
	while (l >= base)
	{
		l = l / base;
		i++;
	}
	i++;
	no = (char *)malloc(i + 1);
	if (nbr == 0)
		*no = 48;
	no[i] = '\0';
	while (n)
	{
		no[--i] = ((n % base + 48) > '9') ? n % base + 55 : n % base + 48;
		n = n / base;
	}
	return (no);
}

char    *ft_itoa_base_small(unsigned int nbr, int base)
{
	long int    n;
	int         i;
	long int    l;
	char        *no;

	n = nbr;
	l = nbr;
	i = 0;
	while (l >= base)
	{
		l = l / base;
		i++;
	}
	i++;
	no = (char *)malloc(i + 1);
	if (nbr == 0)
		*no = 48;
	no[i] = '\0';
	while (n)
	{
		no[--i] = ((n % base + 48) > '9') ? n % base + 87 : n % base + 48;
		n = n / base;
	}
	return (no);
}
