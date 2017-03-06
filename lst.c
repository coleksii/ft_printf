/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/24 20:13:26 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/05 19:52:49 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	lst_bzero(t_plist *lst)
{
	if (lst->flags)
		free(lst->flags);
	lst->width = 0;
	lst->prec = 0;
	lst->size = 0;
	lst->type = 0;
	lst->hash = 0;
}
