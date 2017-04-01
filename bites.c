/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bites.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/31 15:23:59 by coleksii          #+#    #+#             */
/*   Updated: 2017/04/01 19:49:09 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_w_char(int d, char *s, int *p)
{
	int i;

	i = 0;
	if (d <= 0x7F)
	{
		s[i++] = ((*p)--) ? d : '\0';
		s[i] = '\0';
	}
	else if (d > 0x7F && d <= 0x7FF)
	{
		s[i++] = ((*p)--) ? d >> 6 | 0xC0 : '\0';
		s[i++] = ((*p)--) ? ((d & 0x3F) | 0x80) : '\0';
	   	s[i] = '\0';
	}
	else if (d > 0x7FF && d <= 0x7FFF)
	{
		s[i++] = ((*p)--) ? d >> 12 | 0xE0 : '\0';
		s[i++] = ((*p)--) ? (d >> 6 & 0x3F) | 0x80 : '\0';
		s[i++] = ((*p)--) ? ((d & 0x3F) | 0x80) : '\0';
		s[i] = '\0';
	}
	else if (d > 0x7FFF && d <= 0x7FFFF)
	{
		s[i] = ((*p)--) ? d >> 18 | 0xF0 : '\0';
		s[i++] = ((*p)--) ? (d >> 12 & 0x3F) | 0x80 : '\0';
		s[i++] = ((*p)--) ? (d >> 6 & 0x3F) | 0x80 : '\0';
		s[i++] = ((*p)--) ? ((d & 0x3F) | 0x80) : '\0';
		s[i] = '\0';
	}
	return (i);
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
