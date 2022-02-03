/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:42:33 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/03 23:55:13 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_triple(int x, int y, int z)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	write (1, &x, 1);
	write (1, &y, 1);
	write (1, &z, 1);
	if (x == 55 && y == 56 && z == 57)
		return ;
	write(1, &comma, 1);
	write(1, &space, 1);
}

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 48;
	y = 49;
	z = 50;
	while (x <= 55 && y <= 56 && z <= 57)
	{
		ft_print_triple(x, y, z);
		if (++z <= 57)
			continue ;
		else if (++y <= 56)
			z = y + 1;
		else if (++x <= 55)
		{
			y = x + 1;
			z = x + 2;
		}
	}
}	
