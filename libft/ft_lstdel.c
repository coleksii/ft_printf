/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/09 17:57:41 by coleksii          #+#    #+#             */
/*   Updated: 2016/12/09 19:16:39 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*res;

	if (!del || !del)
		return ;
	while (*alst)
	{
		res = (*alst)->next;
		del((*alst)->content, (*alst)->content_size);
		*alst = res;
		free(*alst);
	}
	*alst = NULL;
}
