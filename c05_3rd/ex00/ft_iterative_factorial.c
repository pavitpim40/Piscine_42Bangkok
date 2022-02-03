/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 00:07:04 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/02 13:00:02 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0 || nb > 16)
		return (0);
	if (nb == 0)
		return (1);
	while (nb >= 1)
	{
		result *= nb;
		nb --;
	}
	return (result);
}
