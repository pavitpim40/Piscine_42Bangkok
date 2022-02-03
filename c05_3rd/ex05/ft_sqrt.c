/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 19:28:57 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/03 00:15:27 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive(int sqrt, int nb)
{
	if (sqrt * sqrt == nb)
		return (sqrt);
	else if (sqrt * sqrt > nb)
		return (0);
	else if (sqrt * sqrt < nb && sqrt < 46340)
		sqrt = ft_recursive(sqrt + 1, nb);
	else
		return (0);
	return (sqrt);
}

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb < 0 || nb > 2147483647)
		return (0);
	sqrt = ft_recursive(sqrt, nb);
	return (sqrt);
}
