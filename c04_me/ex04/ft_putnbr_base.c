/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 02:03:51 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/31 18:29:40 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_nbr_with_base(long num, int base, char *ref)
{
	if (num < base)
	{	
		ft_putchar(ref[num]);
		return ;
	}
	else
	{
		put_nbr_with_base(num / base, base, ref);
		ft_putchar(ref[num % base]);
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
