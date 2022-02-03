/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:56:21 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/02 13:02:59 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
//	printf("next prime of 13 is 17 ==>  %d\n", ft_find_next_prime(14));
//	printf("next prime of 79 is 83 ==>  %d\n", ft_find_next_prime(80));
//	printf("next prime of 491 is 499 ==>  %d\n", ft_find_next_prime(492));
//	printf("next prime of 733 is 739 ==>  %d\n", ft_find_next_prime(734));
//	printf("next prime of 137 is 139 ==>  %d\n", ft_find_next_prime(138));
//	printf("next prime of 2 is 3 ==>  %d\n", ft_find_next_prime(3));
//	printf("next prime of 1 is 2 ==>  %d\n", ft_find_next_prime(1));
	printf("next prime of 2147483647 is ... ==>  %d\n", ft_find_next_prime(2147483646));
	printf("next prime of 2147483643 is .. ==>  %d\n", ft_find_next_prime(2147483643));
	printf("next prime of 2147483645 is .. ==>  %d\n", ft_find_next_prime(2147483645));
	printf("next prime of 2147483646 is .. ==>  %d\n", ft_find_next_prime(2147483646));
	printf("next prime of 2147395600 is .. ==>  %d\n", ft_find_next_prime(2147395600));
	printf("next prime of 2147395609 is .. ==>  %d\n", ft_find_next_prime(2147395610));
	printf("next prime of -500 is .. ==>  %d\n", ft_find_next_prime(-500));
}
