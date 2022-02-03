/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 01:13:47 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/30 01:34:38 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_multiply(int nb, int power)
{
	int	r;

	r = 1;
	if (power == 1)
		return (nb);
	else
	{
		r = nb * ft_recursive_multiply(nb, power - 1);
	}
	return (r);
}

int	ft_recursive_power(int nb, int power)
{
	int	r;

	r = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power < 0)
		return (0);
	if (power >= 2)
		r = ft_recursive_multiply(nb, power);
	return (r);
}
