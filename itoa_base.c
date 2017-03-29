/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 13:46:03 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/28 18:35:24 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	precision(int *pre, int *i, t_plist *lst, uintmax_t *nbr)
{
	*pre = (lst->prec - *i > 0) ? lst->prec - *i : 0;
	*i += (lst->hash && *nbr) ? 2 : 0;
	if (((lst->hash)) && lst->nul && !lst->minus)
		*pre += (lst->width - *pre - *i > 0) ? lst->width - *pre - *i : 0;
}

char    *ft_itoa_base_big(uintmax_t nbr, unsigned int b, t_plist *lst)
{
	uintmax_t    n;
	int         i;
	char        *no;
	int			pre;

	n = nbr;
	i = 0;
	pre = 0;
	while (++i && n >= b)
		n = n / b;
	precision(&pre, &i, lst, &nbr); 
/*	pre = (lst->prec - i > 0) ? lst->prec - i : 0;
	i += (lst->hash && nbr) ? 2 : 0;
	if (((lst->hash)) && lst->nul && !lst->minus)
		pre += (lst->width - pre - i > 0) ? lst->width - pre - i : 0;*/
	no = (char *)malloc(i + pre + 1);
	if ((lst->hash && (no[1] = lst->type) && nbr) || (!nbr && lst->prec))
		no[0] = 48;
	no[i + pre] = '\0';
	n = nbr;
	b = (lst->type == 'x') ? 87 : 55;
	while (n)
	{
		no[--i + pre] = ((n % 16 + 48) > '9') ? n % 16 + b : n % 16 + 48;
	   	(n = n / 16);
	}
	while (pre--)
		no[i + pre] = 48;
	return (no);
}

char	*ft_itoa_base_o(uintmax_t nbr, unsigned int base, t_plist *lst)
{
	uintmax_t	n;
	int         i;
	char        *no;
	int			pre;

	n = nbr;
	i = 0;
	while (++i && n >= base)
		n = n / base;
	pre = lst->prec - i;
	pre = (pre >= 0) ? pre : 0;
	if (lst->hash && nbr)
		i++;
	if (lst->hash && lst->prec > i)
		pre--;
	no = (char *)malloc(i + pre + 1);
	no[i + pre] = '\0';
	if ((nbr == 0 && lst->prec != 0) || lst->hash)
		no[0] = 48;
	n = nbr;
	while (n && (no[--i + pre] = n % base + 48))
		n = n / base;
	while (pre--)
		no[i + pre] = 48;
	return (no);
}

char    *ft_itoa_base_p(unsigned long int nbr, unsigned int base, t_plist *lst)
{
	unsigned long long int    n;
	int         i;
	unsigned long long int    l;
	char        *no;
	int			pre;

	n = nbr;
	l = nbr;
	i = 0;
	while (++i && l >= base)
		l = l / base;
	pre = lst->prec - i;
	pre = (pre >= 0) ? pre : 0;
	i += 2;
	if (lst->nul && !lst->minus)
		pre += (lst->width - pre - i > 0) ? lst->width - pre - i : 0;
	no = (char *)malloc(i + pre + 1);
	no[0] = 48;
	if ((no[1] = 'x') && nbr == 0 && lst->prec)
		no[2] = 48;
	no[i + pre] = '\0';
	while (n)
	{
		no[--i + pre] = ((n % base + 48) > '9') ? n % base + 87 : n % base + 48;
		n = n / base;
	}
	while (pre--)
		no[i + pre] = 48;
	return (no);
}
