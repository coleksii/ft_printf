/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 19:28:58 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/22 17:12:39 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# define UKRAINE {\
	printf("\x1b[7;34;43mUkraine\x1b[0m\n");\
	printf("\x1b[6;34;43m  Test \x1b[0m\n");\
}
#include <locale.h>

#include "ft_printf.h"

int main()
{
	int y;
	double i;
	int		*o;
	unsigned int	d;
	i = 2.2356569;
	d = 499;
	o = 0x7ffc2f868ee0;
	UKRAINE

	setlocale(LC_ALL, "en_US.UTF-8");
 	y = ft_printf("%d  %.5u  %d\n",77777, 25, 77777);
	ft_printf("%d\n", y);
	y = printf("%d  %.5u  %d\n", 77777, 25, 77777);
	printf("%d\n", y);

 	y = ft_printf("%d %07 %d%d\n", 77777, d, 77777);
	ft_printf("%d\n", y);
	y = printf("%d %07 %d%d\n", 77777, d, 77777);
	printf("%d\n", y);
	return (0);
}
