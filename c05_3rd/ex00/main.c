/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 00:38:19 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/02 01:40:44 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf("factorial of 0 %d\n", ft_iterative_factorial(0));
	printf("factorial of 1 %d\n", ft_iterative_factorial(1));
	printf("factorial of 3 %d\n", ft_iterative_factorial(3));
	printf("factorial of 4 %d\n", ft_iterative_factorial(4));
	printf("factorial of 5 %d\n", ft_iterative_factorial(5));
	printf("factorial of 10 %d\n", ft_iterative_factorial(10));
	printf("factorial of 15 %d\n", ft_iterative_factorial(15));
	printf("factorial of 16 %d\n", ft_iterative_factorial(16));
	printf("factorial of 17 %d\n", ft_iterative_factorial(17));
	printf("factorial of -5 %d\n", ft_iterative_factorial(-5));
}
