/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/12 15:19:17 by coleksii          #+#    #+#             */
/*   Updated: 2016/12/12 15:25:11 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isnumber(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}