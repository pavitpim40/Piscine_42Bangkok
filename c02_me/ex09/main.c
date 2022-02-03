/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:21:00 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/04 00:49:59 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	p1[] = "salut, COOMment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	*p2;
	
	p2 = ft_strcapitalize(p1);
	printf("%s\n", p2);
	
	char	p3[] = "-F<F*UOf3cn\"E%`5c9b*J$";
	char	*p4;
	
	p4 = ft_strcapitalize(p3);
	printf("%s\n", p4);
	
	char	p5[] = "A`X${&3>CSE#Abx2gpl96ml+7";
	char	*p6;
	
	p6 = ft_strcapitalize(p5);
	printf("%s\n", p6);
}
