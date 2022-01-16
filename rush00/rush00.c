/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 18:08:39 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/16 19:59:50 by travang-         ###   ########.fr       */
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
		if ((i == 1 || i == n) && (j == 1 || j == m))
			ft_putchar ('o');
		else if (i == 1 || i == n)
			ft_putchar ('-');
		else if (j == 1 || j == m)
			ft_putchar ('|');
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
