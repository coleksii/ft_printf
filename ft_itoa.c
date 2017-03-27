/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 14:12:26 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/24 17:43:24 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void			bood_null();

static char		*plus(intmax_t n, t_plist *lst)
{
	int			i;
	long int	l;
	int			pre;
	char		*str;

	l = n;
	i = 0;
	while (l >= 10 && (l = l / 10))
		i++;
	pre = lst->prec - i - 1;
	pre = (pre >= 0) ? pre : 0;
	if (lst->nul && lst->width - i - 1 > 0 && !lst->minus)
		pre +=  lst->width - i - 2;    //выношу в отдельную функцию blood null
	i += (lst->plus || lst->space) ? 1 : 0;
	str = (char *)malloc(i + pre + 2);
	str[i + pre + 1] = '\0';
	while (i >= 0 && (str[i-- + pre] = n % 10 + '0'))
		n = n / 10;
	i = 0;
	l = '+';
	while (pre-- > 0)
		str[i++] = '0';
	if (lst->plus == '+' || (lst->space && (l = ' ')))
		str[0] = l;
	return (str);
}

static char		*minus(intmax_t n, t_plist *lst)
{
	intmax_t		i;
	intmax_t		l;
	int				pre;
	char			*str;

	l = n;
	i = 0;
	while (l <= 10 && (l = l / 10))
		i++;
	pre = lst->prec - i - 1;
	pre = (pre >= 0) ? pre : 0;
	if (lst->nul && lst->width - i - 1 > 0 && !lst->minus)
		pre += lst->width - i - 2;
	str = (char *)malloc(i + pre + 3);
	str[i++ + pre + 2] = '\0';
	while (i - 1 >= 0)
	{
		str[i-- + pre] = n % 10 * -1 + '0';
		n = n / 10;
	}
	str[0] = '-';
	i = 1;
	while (pre--)
		str[i++] = '0';
	return (str);
}

char			*ft_itoa(intmax_t n, t_plist *lst)
{
	char		*str;
	intmax_t	l;

	l = n;
	if (n >= 0)
		str = plus(l, lst);
	if (n < 0)
	{
		lst->negative = 1;
		str = minus(l, lst);
	}
	return (str);
}
