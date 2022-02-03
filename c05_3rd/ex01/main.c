/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 00:50:04 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/02 01:46:37 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("%d\n", ft_recursive_factorial(0));	
	printf("%d\n", ft_recursive_factorial(1));	
	printf("%d\n", ft_recursive_factorial(4));	
	printf("%d\n", ft_recursive_factorial(7));	
	printf("%d\n", ft_recursive_factorial(16));	
	printf("%d\n", ft_recursive_factorial(17));	
	printf("%d\n", ft_recursive_factorial(-3));	
}
