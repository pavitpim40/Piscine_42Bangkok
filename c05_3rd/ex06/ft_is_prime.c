/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:32:20 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/02 02:09:50 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime_recursive(int nb, int candidate, int stack)
{	
	if (candidate == 46340 || candidate * candidate > nb || stack == 2)
		return (stack);
	else
	{
		if (nb % candidate == 0)
		{
			stack += 1;
		}
		stack = ft_is_prime_recursive(nb, candidate + 1, stack);
	}
	return (stack);
}

int	ft_is_prime(int nb)
{
	int	stack;
	int	candidate;

	stack = 0;
	candidate = 1;
	if (nb < 2)
		return (0);
	stack = ft_is_prime_recursive(nb, candidate, stack);
	if (stack >= 2)
		return (0);
	else
		return (1);
}
