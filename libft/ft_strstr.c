/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/01 15:46:49 by coleksii          #+#    #+#             */
/*   Updated: 2016/12/14 14:47:41 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *big, const char *lit)
{
	size_t i;

	i = 0;
	if (!*lit)
		return ((char*)big);
	while (*big != '\0')
	{
		if (*big == lit[i])
		{
			while (big[i] == lit[i])
			{
				if (lit[i + 1] == '\0')
					return ((char*)big);
				++i;
			}
			i = 0;
		}
		++big;
	}
	return (0);
}
