/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 04:28:49 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/19 19:39:21 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	get_abs_value(int n)
{
	int	num;

	if (n < 0)
		num = -1 * n;
	else
		num = n;
	return (num);
}

int	get_exponent(int n)
{
	int	multiply;

	multiply = 1;
	while (n > 9)
	{
		multiply *= 10 ;
		n /= 10;
	}	
	return (multiply);
}

void	ft_putnbr(int n)
{
	int	exponent;
	int	abs_value;

	if (n > 2147483647 || n < -2147483648)
		return ;
	if (n < 0)
		ft_putchar ('-');
	if (n == -2147483648)
	{
		ft_putchar ('2');
		abs_value = get_abs_value (147483648);
	}
	else
		abs_value = get_abs_value(n);
	exponent = get_exponent(abs_value);
	while (exponent)
	{
		if (exponent)
			ft_putchar (abs_value / exponent + '0');
		abs_value = abs_value % exponent;
		exponent = exponent / 10;
	}
}
