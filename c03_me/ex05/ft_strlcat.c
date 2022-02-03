/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:58:56 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/04 03:57:58 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (*str)
	{
		str ++;
		len ++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(dest);
	if (len >= size)
		return (size + ft_strlen(src));
	while ((len + i < size - 1) && (src[i] != '\0'))
	{
		dest[len + i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (len + ft_strlen(src));
}
