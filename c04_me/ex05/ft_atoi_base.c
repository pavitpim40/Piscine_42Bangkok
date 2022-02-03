/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 22:26:47 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/04 04:07:01 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_nbr_with_base(long num, int base, char *ref)
{
	if (num < base)
	{	
		write(1, &ref[num], 1);
		return ;
	}
	else
	{
		put_nbr_with_base(num / base, base, ref);
		write(1, &ref[num % base], 1);
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	validate_base(char *base)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = ft_strlen(base);
	if (len == 1 || len == 0)
		return (0);
	while (base[i] != '\0')
	{
		j = 0;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == ' ' || base[i] == '\t' || base[i] == '\n'
			|| base[i] == '\v' || base[i] == '\f' || base[i] == '\r')
			return (0);
		while (j < i)
		{	
			if (base[i] == base[j])
				return (0);
			j ++;
		}
		i ++;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		bs;
	int		tmp;
	long	abs;

	tmp = 0;
	abs = (long)nbr;
	bs = validate_base(base);
	if (bs == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		abs *= -1;
	}
	put_nbr_with_base(abs, bs, base);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		sign;
	long	nbr;

	i = 0;
	nbr = 0;
	sign = 1;
	if (str[i] == '\0')
		return (0);
	while (str[i] != '\0' && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r'))
		i ++;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i ++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		nbr = (nbr * 10) + (str[i] - 48);
		i++;
	}
	ft_putnbr_base(nbr * sign, base);
	return (nbr * sign);
}
