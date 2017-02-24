/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 15:44:05 by coleksii          #+#    #+#             */
/*   Updated: 2016/12/02 14:31:58 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (dst[i] != '\0')
		i++;
	if (i >= n)
		return (n + ft_strlen(src));
	else if (i == n - 1)
		return (n + ft_strlen(src) - 1);
	while (i < n - 1 && *src)
		dst[i++] = *src++;
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
