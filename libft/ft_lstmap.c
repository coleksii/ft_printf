/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 17:37:30 by coleksii          #+#    #+#             */
/*   Updated: 2016/12/14 16:43:27 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ter;
	t_list	*beg;

	if (!lst || !f)
		return (0);
	ter = f(lst);
	beg = ter;
	while (lst->next)
	{
		ter->next = f(lst->next);
		if (ter->next == NULL)
			return (0);
		lst = lst->next;
		ter = ter->next;
	}
	return (beg);
}
