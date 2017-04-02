/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 19:28:58 by coleksii          #+#    #+#             */
/*   Updated: 2017/04/02 18:06:24 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# define UKRAINE {\
	printf("\x1b[7;34;43mUkraine\x1b[0m\n");\
	printf("\x1b[6;34;43m  Test \x1b[0m\n");\
}
#include <locale.h>
#include <limits.h>
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
	setlocale(LC_ALL, "");

//	y = printf("{%010d}", 42);
//	y += printf("{%010d}", -42);
//	y += printf("{%04d}", 10000);
//	y += printf("{%030d}", 10000);
//	y += printf("{%030x}", 0xFFFF);
//	y +=printf("{%030X}", 0xFFFF);
	y = printf("{%03s}", 0);
	/*
	y +=printf("{%05s}", "abc");
	y +=printf("{%030S}", L"我是一只猫。");
	y +=printf("{%05p}", 0);
	y += printf("{%05p}", &main);
	*/				
	printf("\nreturn orig: %d\n", y);

//	y = ft_printf("{%010d}", 42);
//	y +=ft_printf("{%010d}", -42);
//	y +=ft_printf("{%04d}", 10000);
//	y +=ft_printf("{%030d}", 10000);
//	y +=ft_printf("{%030x}", 0xFFFF);
//	y +=ft_printf("{%030X}", 0xFFFF);
	y = ft_printf("{%03s}", 0);
//	y +=ft_printf("{%05s}", "abc");
//	y +=ft_printf("{%030S}", L"我是一只猫。");
//	y +=ft_printf("{%05p}", 0);
//	y += ft_printf("{%05p}", &main);

	printf("\nreturn orig: %d\n", y);
	return (0);
}
