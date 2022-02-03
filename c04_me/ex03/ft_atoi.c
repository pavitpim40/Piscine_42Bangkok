/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 04:18:22 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/29 21:07:48 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_number(char c)
{	
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	is_white_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	is_sign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	sign;

	i = 0;
	nbr = 0;
	sign = 1;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0' && is_white_space(str[i]))
		i ++;
	while (str[i] != '\0' && is_sign(str[i]))
	{
		if (str[i] == '-')
			sign *= -1;
		i ++;
	}
	while (str[i] != '\0' && is_number(str[i]))
	{
		nbr = (nbr * 10) + (str[i] - 48);
		i++;
	}
	return (nbr * sign);
}
