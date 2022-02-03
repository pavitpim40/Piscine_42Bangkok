/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 13:22:32 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/04 01:49:30 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
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
		return (0);
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (0);
	while (min + (int)i < max)
	{
		arr[i] = min + (int)i;
		i++;
	}
	return (arr);
}	
