/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 04:21:46 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/04 00:54:16 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char str)
{
	if (str < 'A' || (str > 'Z' && str < 'a') || str > 'z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cap;

	i = 0;
	cap = 1;
	while (str[i])
	{
		if (ft_str_is_alpha(str[i]))
			cap = 1;
		if (cap && (str[i] >= '0' && str[i] <= '9'))
			cap = 0;
		else if (cap && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			cap = 0;
		}
		else if (cap && (str[i] >= 'A' && str[i] <= 'Z'))
			cap = 0;
		else if (!cap && (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] = str[i] + 32;
		}
			i++ ;
	}
	return (str);
}
