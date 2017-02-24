/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:17:41 by coleksii          #+#    #+#             */
/*   Updated: 2016/12/01 12:26:09 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(const void *str, int s, size_t n)
{
	unsigned char	*sr;
	int				i;

	i = 0;
	sr = (unsigned char*)str;
	while (n > 0)
	{
		sr[i] = s;
		n--;
		i++;
	}
	return ((void *)str);
}
