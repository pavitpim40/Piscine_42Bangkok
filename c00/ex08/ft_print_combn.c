/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 00:24:11 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/04 00:25:04 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putout(int nb, int *tab, int pos)
{
	int	i;

	if (pos == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	i = 0;
	while (i < nb)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
}

void	ft_print_combn_increment(int nb, int *tab)
{
	int	i;
	int	max;

	i = nb - 1;
	max = 9;
	while (tab[i] == max)
	{
		i -= 1;
		max -= 1;
	}
	tab[i] += 1;
	while (i < nb)
	{
		tab[i + 1] = tab[i] + 1;
		i += 1;
	}
}

void	ft_print_combn(int nb)
{
	int	tab[10];
	int	i;

	i = 0;
	while (i < nb)
	{
		tab[i] = i;
		i++;
	}
	ft_putout(nb, tab, 0);
	while (tab[0] != 10 - nb || tab[nb - 1] != 9)
	{
		if (tab[nb - 1] != 9)
		{
			tab[nb - 1] += 1;
		}
		else
		{
			ft_print_combn_increment(nb, tab);
		}
		ft_putout(nb, tab, 1);
	}
}
