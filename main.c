/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coleksii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/16 19:28:58 by coleksii          #+#    #+#             */
/*   Updated: 2017/03/09 15:28:57 by coleksii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# define UKRAINE ft_printf("\x1b[7;34;43mUkraine\x1b[0m\n");
# define FLAG	printf("\x1b[6;34;43m  Test \x1b[0m\n");

#include "ft_printf.h"

int main()
{
	int y;
	double i;
	unsigned int	d;
	i = 2.2356569;
	d = 499;
	UKRAINE FLAG

 	y = ft_printf("%d%10.9d%d\n", 77777, -12345, 77777);
	ft_printf("%d\n", y);
	y = printf("%d%10.9d%d\n", 77777, -12345, 77777);
	printf("%d\n", y);

 	y = ft_printf("%d%10.9s%d\n", 77777, "12345", 77777);
	ft_printf("%d\n", y);
	y = printf("%d%10.9s%d\n", 77777, "12345", 77777);
	printf("%d\n", y);
	return (0);
}
