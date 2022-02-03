/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:22:24 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/04 01:55:39 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0')
	{
		len += 1;
		str ++;
	}
	return (len);
}

int	total_len(int size, char **strs, char *sep)
{	
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	i = 0;
	while (i < size - 1)
	{
		total_len += ft_strlen(sep);
		i++;
	}
	return (total_len);
}

char	*join(int size, char **strs, char *sep, char *res)
{
	int	i;
	int	j;
	int	k;

	i = -1;
	k = 0;
	while (++i < size)
	{	
		j = 0;
		while (j < ft_strlen(strs[i]))
		{
			res[k] = strs[i][j];
			j ++;
			k ++;
		}
		j = 0;
		while (j < ft_strlen(sep) & i < size -1)
		{
			res[k] = sep[j];
			j ++;
			k ++;
		}	
	}
	res[k] = '\0';
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*res;

	if (size == 0)
	{
		res = (char *)malloc(1);
		return (res);
	}
	len = total_len(size, strs, sep);
	res = malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (0);
	return (join(size, strs, sep, res));
}
