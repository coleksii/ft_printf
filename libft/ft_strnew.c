/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 18:27:33 by coleksii          #+#    #+#             */
/*   Updated: 2016/12/20 19:26:01 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*s;
	size_t	i;

	i = 0;
	if (!size)
		return (NULL);
	s = (char *)malloc(size + 1);
	if (s == NULL)
		return (NULL);
	while (size--)
	{
		s[i] = '\0';
		i++;
	}
	s[i] = '\0';
	return (s);
}
