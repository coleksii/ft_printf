/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countw.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/05 14:04:31 by coleksii          #+#    #+#             */
/*   Updated: 2016/12/06 16:33:03 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countw(const char *s, char sep)
{
	int flag;
	int i;

	flag = 0;
	i = 0;
	while (*s == sep)
		s++;
	while (*s != '\0')
	{
		if (*s != sep)
		{
			flag = 1;
			s++;
		}
		if (*s == sep)
		{
			i = i + flag;
			s++;
			flag = 0;
		}
	}
	if (*--s == sep)
		return (i);
	return (i + 1);
}
