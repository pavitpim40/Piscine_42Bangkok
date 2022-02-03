/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 15:18:38 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/02 02:09:42 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	main()
{
	printf("Test 15 ==> %d\n", ft_is_prime(15));
	printf("Test 214783647 ==> %d\n", ft_is_prime(2147483647));
	printf("Test 17 ==> %d\n", ft_is_prime(17));
	printf("Test 37 ==> %d\n", ft_is_prime(37));
	printf("Test 11 ==> %d\n", ft_is_prime(11));
	printf("Test 19 ==> %d\n", ft_is_prime(19));
	printf("Test 151 ==> %d\n", ft_is_prime(151));
	printf("Test 197 ==> %d\n", ft_is_prime(197));
	printf("Test 61 ==> %d\n", ft_is_prime(61));
	printf("Test 67 ==> %d\n", ft_is_prime(67));
	printf("Test 71 ==> %d\n", ft_is_prime(71));
	printf("Test 250 ==> %d\n", ft_is_prime(250));
	printf("Test 2 ==> %d\n", ft_is_prime(2));
	printf("Test 3 ==> %d\n", ft_is_prime(3));
	printf("Test 50893 ==> %d\n", ft_is_prime(50893));
}
