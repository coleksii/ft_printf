/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 15:46:49 by coleksii          #+#    #+#             */
/*   Updated: 2016/12/14 14:45:04 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t i;

	i = 0;
	if (!*lit)
		return ((char*)big);
	while (*big != '\0' && len > 0)
	{
		if (*big == lit[i])
		{
			while (big[i] == lit[i] && len > 0)
			{
				if (lit[i + 1] == '\0')
					return ((char*)big);
				++i;
				--len;
			}
			i = 0;
		}
		++big;
		--len;
	}
	return (0);
}
