/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 19:28:58 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/06 16:20:34 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main()
{
	int y;
	double i;
	unsigned int	d;
	i = 2.2356569;
	d = 499;
	
	ft_printf("s%5%\n", d);
	ft_printf("\x1b[7;34;43mUkraine\x1b[0m\n");
	printf("\x1b[5;43mTest\x1b[0m\n");

	ft_printf("%%\n");
	printf("%5%\n");

	y = printf("%d%o\n", 48, -106);
	printf("d = %d\n", y);
	
	y = printf("iii%#d   %#o\n", 48, -106);
	ft_printf("d = %d\n", y);
	return (0);
}
