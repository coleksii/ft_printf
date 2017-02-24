/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 15:22:49 by coleksii          #+#    #+#             */
/*   Updated: 2016/12/01 12:28:20 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t l)
{
	unsigned char	*o;
	unsigned char	a;

	o = (unsigned char *)b;
	a = (unsigned char)c;
	if (l)
	{
		while (l > 0)
		{
			if (*o == a)
				return (o);
			o++;
			l--;
		}
	}
	return (NULL);
}
