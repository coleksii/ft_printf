/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 13:46:03 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/22 16:59:48 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char    *ft_itoa_base_big(unsigned long int nbr, int base, t_plist *lst)
{
	long int    n;
	int         i;
	long int    l;
	char        *no;
	int			pre;

	n = nbr;
	l = nbr;
	i = 0;
	while (++i && l >= base)
		l = l / base;
	pre = lst->prec - i;
	pre = (pre >= 0) ? pre : 0;
	if (lst->hash && (lst->type == 'X' || lst->type == 'O') && nbr)
		i += (lst->type == 'X') ? 2 : 1;
	if (((lst->hash && lst->type == 'X') || lst->type == 'p') && lst->nul && !lst->minus)
		pre += lst->width - pre - i;
	if (lst->hash && lst->type == 'O' && lst->prec > l)
		pre--;
	no = (char *)malloc(i + pre + 1);
	if (lst->hash && (lst->type == 'X' || lst->type == 'O') && (no[1] = 'X'))
		no[0] = 48;	
	if (nbr == 0)
		*no = 48;
	no[i + pre] = '\0';
	while (n)
	{
		no[--i + pre] = ((n % base + 48) > '9') ? n % base + 55 : n % base + 48;
		n = n / base;
	}
	while (pre--)
		no[i + pre] = 48;
	return (no);
}

char    *ft_itoa_base_small(unsigned long int nbr, int base, t_plist *lst)
{
	long int    n;
	int         i;
	long int    l;
	char        *no;
	int			pre;

	n = nbr;
	l = nbr;
	i = 0;
	while (++i && l >= base)
		l = l / base;
	pre = lst->prec - i;
	pre = (pre >= 0) ? pre : 0;
	if (lst->hash && (lst->type == 'x' || lst->type == 'o') && nbr)
		i += (lst->type == 'o') ? 1 : 2;
	if (lst->hash && lst->type == 'o' && lst->prec > l)
		pre--;
	if (((lst->hash && lst->type == 'x') || lst->type == 'p') && lst->nul && !lst->minus)
		pre += lst->width - pre - i;
	no = (char *)malloc(i + pre + 1);
	if (lst->hash && (lst->type == 'x' || lst->type == 'o') && (no[1] = 'x'))
		no[0] = 48;	
	if (nbr == 0)
		*no  = 48;
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
		pre += lst->width - pre - i;
	no = (char *)malloc(i + pre + 1);
	if ((no[1] = 'x') && (no[0] = 48) && nbr == 0)
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
