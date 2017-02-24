/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 15:22:49 by coleksii          #+#    #+#             */
/*   Updated: 2016/12/02 17:22:57 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *u, const void *in, int c, size_t l)
{
	unsigned char	*o;
	unsigned char	*t;
	unsigned char	a;

	o = (unsigned char *)u;
	t = (unsigned char *)in;
	a = (unsigned char)c;
	if (l)
	{
		while (l > 0)
		{
			if (*t == a)
			{
				*o = *t;
				return (++o);
			}
			*o++ = *t++;
			l--;
		}
	}
	return (NULL);
}
