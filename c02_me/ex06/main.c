/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:11:33 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/26 03:28:09 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	int	r,s,t;
	
	r = ft_str_is_printable("asddwedkfkeefefefe4536#%12d");
	printf("%d", r);
	s = ft_str_is_printable("\n\t");
	printf("%d", s);
	t = ft_str_is_printable("");
	printf("%d", t);
}
