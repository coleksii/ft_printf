/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bites.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 15:23:59 by coleksii          #+#    #+#             */
/*   Updated: 2017/04/01 20:14:33 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_w_char(int d, char *s, int *p)
{
	if (d <= 0x7F && (*p == -2 || (*p)-- > 0))
	{
		s[0] = d;
		s[1] = '\0';
		return (1);
	}
	else if (d > 0x7F && d <= 0x7FF && (*p == -2 || (*p -= 2) > 0))
	{
		s[0] = d >> 6 | 0xC0;
		s[1] = ((d & 0x3F) | 0x80);
	   	s[2] = '\0';
		return (2);	
	}
	else if (d > 0x7FF && d <= 0x7FFF && (*p == -2 || (*p -= 3) > 0))
	{
		s[0] = d >> 12 | 0xE0;
		s[1] = (d >> 6 & 0x3F) | 0x80;
		s[2] = ((d & 0x3F) | 0x80);
		s[3] = '\0';
		return (3);
	}
	else if (d > 0x7FFF && d <= 0x7FFFF && (*p == -2 || (*p -= 4) > 0))
	{
		s[0] = d >> 18 | 0xF0;
		s[1] = (d >> 12 & 0x3F) | 0x80;
		s[2] = (d >> 6 & 0x3F) | 0x80;
		s[3] = ((d & 0x3F) | 0x80);
		s[4] = '\0';
		return (4);
	}
	return (0);
}

int		count_w(wchar_t *s)
{
	int i;
	int l;

	l = 0;
	i = 0;
	while (s[l] != '\0')
	{
		if (s[l] <= 0x7F)
			++i;
		else if (s[l] > 0x7F && s[l] <= 0x7FF)
			i += 2;
		else if (s[l] > 0x7FF && s[l] <= 0x7FFF)
			i += 3;
		else if (s[l] > 0x7FFF && s[l] <= 0x7FFFF)
			i += 4;
		++l;
	}
	return (i);
}
