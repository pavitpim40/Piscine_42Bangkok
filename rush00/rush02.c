/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:08:39 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/16 19:28:09 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int m, int n)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i <= n)
	{
		if (i == 1 && (j == 1 || j == m))
			ft_putchar ('A');
		else if (i == n && (j == 1 || j == m))
			ft_putchar ('C');
		else if (i == 1 || i == n || j == 1 || j == m)
			ft_putchar ('B');
		else
			ft_putchar (' ');
		j++;
		if (j > m)
		{
			i += 1;
			j = 1;
			ft_putchar ('\n');
		}
	}
}
