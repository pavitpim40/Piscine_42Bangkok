/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:03:52 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/02 13:00:28 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime_recursive(int nb, int candidate, int stack)
{
	if (candidate == 46340 || candidate * candidate > nb || stack == 2)
		return (stack);
	else
	{
		if (nb % candidate == 0)
			stack += 1;
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

int	ft_find_next_prime(int nb)
{
	int	i;
	int	next_prime;

	if (ft_is_prime(nb) == 1)
		return (nb);
	if (nb < 0)
		i = 0;
	else
		i = nb;
	next_prime = i;
	while (i <= 2147483647)
	{
		if (ft_is_prime(i))
		{
			next_prime = i;
			break ;
		}
		i ++;
	}
	return (next_prime);
}
