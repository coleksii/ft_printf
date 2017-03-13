# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skholodn <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/28 12:29:36 by skholodn          #+#    #+#              #
#    Updated: 2017/03/13 14:51:13 by coleksii         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a

SRC = ft_printf.c correct.c parametres.c decemical.c lst.c ft_putstr.c ft_itoa.c ft_putchar.c itoa_base.c u_itoa.c fft.c printable.c ft_strlen.c

OBJ = ft_printf.o correct.o parametres.o decemical.o lst.o ft_putstr.o ft_itoa.o ft_putchar.o itoa_base.o u_itoa.o fft.o printable.o ft_strlen.o

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: ./%.c
	gcc -Wall -Wextra -Werror -o $@ -c $<

clean:
	rm -f $(OBJ)
	
fclean: clean
	rm -rf $(NAME)

re: fclean all
