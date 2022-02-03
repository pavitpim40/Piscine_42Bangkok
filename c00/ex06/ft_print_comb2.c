/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 02:53:21 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/19 04:17:11 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_pattern(int i, int j)
{
	ft_putchar (i / 10 + '0');
	ft_putchar (i % 10 + '0');
	ft_putchar (' ');
	ft_putchar (j / 10 + '0');
	ft_putchar (j % 10 + '0');
	if (!(i == 98 & j == 99))
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i <= 98 && j <= 99)
	{
		ft_put_pattern (i, j);
		if (++j <= 99)
			continue ;
		else
		{
			i += 1;
			j = i + 1;
		}
	}
}
