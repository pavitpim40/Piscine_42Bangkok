/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 02:03:51 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/04 04:07:08 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	//put_nbr_with_base(24141143,2);
	//printf("%d\n", validate_base("0"));
	//printf("%d\n", validate_base(""));
	//printf("%d\n", validate_base("01"));
	ft_putnbr_base(-2147483648,"01234 6789ABXDEFGH");
//	ft_putnbr_base(63,"012345678");
//	ft_putnbr_base(63,"0123456789ABCDEF");
//	ft_putnbr_base(63,"0123");
//	ft_putnbr_base(63,"0");
}	
