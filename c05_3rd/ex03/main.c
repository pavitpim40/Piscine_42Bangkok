/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 01:30:57 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/30 01:35:24 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	printf("%d\n", ft_recursive_power(2,5));
	printf("%d\n", ft_recursive_power(0,0));
	printf("%d\n", ft_recursive_power(2000000,500));
	printf("%d\n", ft_recursive_power(-2,5));
}
