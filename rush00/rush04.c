/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: travang- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 20:26:01 by travang-          #+#    #+#             */
/*   Updated: 2022/01/16 20:28:12 by travang-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int n, int m)
{	
	int	i;	
	int	j;

	i = 1;
	j = 1;
	while (i <= m)
	{
		if ((i == 1 && j == 1) || (i == m && j == n && i != 1 && j != 1))
			ft_putchar('A');
		else if ((i == 1 && j == n) || (i == m && j == 1))
			ft_putchar('C');
		else if (i == 1 || i == m || j == 1 || j == n)
			ft_putchar('B');
		else
			ft_putchar(' ');
		j++;
		if (j > n)
		{
			ft_putchar('\n');
			i++;
			j = 1;
		}
	}
}
