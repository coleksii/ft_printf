/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 13:41:29 by coleksii          #+#    #+#             */
/*   Updated: 2016/12/12 16:36:53 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*str1;
	size_t	i;

	i = 0;
	str1 = malloc(sizeof(char) * n + 1);
	if (!str1)
		return (0);
	while (n > 0)
	{
		str1[i] = s1[i];
		i++;
		n--;
	}
	str1[i] = '\0';
	return (str1);
}
