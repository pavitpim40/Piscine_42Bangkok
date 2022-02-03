/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:51:24 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/04 01:25:25 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 1;
	while (*str)
	{
		i ++;
		str ++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(src);
	while (dest[i] && i + 1 < size)
	{
		if (src[i])
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i ++;
	}
	dest[i] = '\0';
	return (len - 1);
}
