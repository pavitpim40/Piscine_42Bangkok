/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:22:49 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/03 14:30:00 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int max, int min);

int	main(void)
{
	int	*my_arr;
	int	i = 0;
	my_arr = ft_range(27,37);
	
	while (i < 10)
	{
		printf("%d\n", my_arr[i]);
		i ++;
	}
}
