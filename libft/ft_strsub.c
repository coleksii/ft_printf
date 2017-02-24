/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 14:42:06 by coleksii          #+#    #+#             */
/*   Updated: 2016/12/07 15:42:19 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	str = (char *)s;
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	while (len > 0)
	{
		str[i] = s[i + start];
		i++;
		len--;
	}
	str[i] = '\0';
	return (str);
}
