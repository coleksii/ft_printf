/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhadiats <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 05:09:52 by rhadiats          #+#    #+#             */
/*   Updated: 2017/02/24 20:25:57 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		countwords(char const *s, char c)
{
	size_t i;
	size_t w;

	i = 0;
	w = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else if ((s[i] != c && s[i + 1] == c) || s[i + 1] == '\0')
		{
			w++;
			i++;
		}
		else
			i++;
	}
	return (w);
}

static char		**array_mallocate(char **dst, char const *s, char c)
{
	size_t count;
	size_t chars;
	size_t	i;

	i = 0;
	count = 0;
	while (s[count] != '\0')
	{
		chars = 0;
		while (s[count] == c && s[count] != '\0')
			count++;
		while (s[count] != c && s[count] != '\0')
		{
			count++;
			chars++;
		}
		dst[i] = (char *)malloc(sizeof(char) * chars + 1);
//		if (dst[i] == NULL)
//			return (NULL);
		i++;
	}
	dst[i] = 0;
	return (dst);
}

static char		**array_put(char **dst, char const *s, char c)
{
	size_t i;
	size_t j;
	size_t count;

	count = 0;
	i = 0;
	while (s[count] != '\0')
	{
		while (s[count] == c && s[count] != '\0')
			count++;
		j = 0;
		while (s[count] != c && s[count] != '\0')
		{
			dst[i][j++] = s[count++];
		}
		dst[i][j] = '\0';
		i++;
	}
	return (dst);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;

	if (!s || !c)
		return (NULL);
	tab = (char **) malloc(sizeof(char *) * countwords(s, c) + 1);
	if (tab == NULL)
		return (NULL);
	tab = array_mallocate(tab, s, c);
	tab = array_put(tab, s, c);
	return (tab);
}
