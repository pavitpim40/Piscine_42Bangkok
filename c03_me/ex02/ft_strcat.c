/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:04:38 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/26 23:35:10 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{	
	int	len;

	len = 1;
	while (*str)
	{
		str ++;
		len ++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{	
	int	len;
	int	i;

	len = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[len - 1 + i] = src[i];
		i ++;
	}
	dest[len - 1 + i] = '\0';
	return (dest);
}
