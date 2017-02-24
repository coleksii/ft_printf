/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/06 16:59:16 by coleksii          #+#    #+#             */
/*   Updated: 2016/12/14 18:02:15 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *str;

	if (!(str = (void *)malloc(sizeof(str) * size + 1)))
		return (0);
	if (str)
		ft_bzero(str, size);
	return (str);
}
