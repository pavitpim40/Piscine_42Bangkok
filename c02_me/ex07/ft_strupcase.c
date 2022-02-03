/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 03:30:53 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/26 04:02:05 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{	
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i ++;
	}
	return (str);
}
