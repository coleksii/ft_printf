/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 16:59:26 by coleksii          #+#    #+#             */
/*   Updated: 2016/12/14 18:03:53 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	long int	i;
	long int	j;
	long int	c;
	long int	v;
	char		*b;

	j = 0;
	c = 0;
	if (!s)
		return (NULL);
	i = (size_t)ft_strlen(s);
	while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
		j++;
	while (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t')
		i--;
	v = i - j;
	if (v <= 0)
		v = 0;
	b = (char *)malloc(sizeof(char) * v + 1);
	if (!b)
		return (NULL);
	while (j < i)
		b[c++] = s[j++];
	b[c] = '\0';
	return (b);
}
