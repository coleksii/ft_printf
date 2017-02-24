/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 15:22:49 by coleksii          #+#    #+#             */
/*   Updated: 2016/12/02 16:40:19 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *out, const void *in, size_t l)
{
	unsigned char	*o;
	unsigned char	*t;

	o = (unsigned char *)out;
	t = (unsigned char *)in;
	while (l > 0)
	{
		*o++ = *t++;
		l--;
	}
	return (out);
}
