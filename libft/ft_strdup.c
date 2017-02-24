/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 13:41:29 by coleksii          #+#    #+#             */
/*   Updated: 2016/12/01 12:27:13 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str1;
	int		i;

	i = 0;
	str1 = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!str1)
		return (0);
	while (s1[i] != '\0')
	{
		str1[i] = s1[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
