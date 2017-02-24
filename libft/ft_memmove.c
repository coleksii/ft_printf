/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 14:52:28 by coleksii          #+#    #+#             */
/*   Updated: 2016/12/12 16:38:29 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t len)
{
	unsigned char		*str1;
	const unsigned char	*str2;

	str1 = (unsigned char *)to;
	str2 = (unsigned char *)from;
	if (str1 > str2)
	{
		while (len)
		{
			str1[len - 1] = str2[len - 1];
			len--;
		}
	}
	else
		while (len)
		{
			*str1++ = *str2++;
			len--;
		}
	return (to);
}
