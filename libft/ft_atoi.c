/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 13:56:09 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/01 19:43:25 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int					minus;
	unsigned long int	n;

	minus = 1;
	n = 0;
	while (*str == '\n' || *str == '\t' || *str == '\v' ||
			*str == '\f' || *str == '\r' || *str == ' ')
		str++;
	if (*str == '-' && (*(str + 1) >= '0' && *(str + 1) <= '9'))
	{
		minus = -1;
		str++;
	}
	if (*str == '+' && (*(str + 1) >= '0' && *(str + 1) <= '9'))
		str++;
	while (*str >= '0' && *str <= '9')
	{
		n = (n * 10) + (*str++ - '0');
		if (n >= 9223372036854775807 && minus == 1)
			return (-1);
		else if (n > 9223372036854775807 && minus == -1)
			return (0);
	}
	return (n * minus);
}
