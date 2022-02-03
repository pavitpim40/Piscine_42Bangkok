/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:58:56 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/04 01:50:43 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*arr;
	long	i;
	long	size;

	i = 0;
	size = (long)max - (long)min;
	if (min < -2147483648 || min > 2147483647 || max < -2147483648
		|| max > 2147483647)
		return (0);
	if (min == max || min > max)
	{	
		*range = NULL;
		return (0);
	}
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (-1);
	while (min + (int)i < max)
	{
		arr[i] = min + (int)i;
		i++;
	}
		*range = arr;
	return ((int)(i));
}	
