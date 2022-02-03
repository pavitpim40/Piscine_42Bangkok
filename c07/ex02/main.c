/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:22:49 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/03 20:16:48 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
int	ft_ultimate_range(int **range,int max, int min);

int	main(void)
{
	int	**range;
	int	i;
	int	len;
	
	i = 0;
	range = malloc(sizeof(int *)*20);
	len = ft_ultimate_range(range,-27,-7);
	
	printf("%d\n", len);
	while (i < len)
	{
		printf("%d\n", range[0][i]);
		i ++;
	}	
}
