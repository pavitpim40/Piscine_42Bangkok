/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 00:44:56 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/02 13:03:52 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	r;

	if (nb < 0 || nb > 2147483647)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	else
	{
		r = nb * ft_recursive_factorial(nb - 1);
	}
	return (r);
}
