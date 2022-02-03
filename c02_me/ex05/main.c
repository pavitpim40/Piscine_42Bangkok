/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:36:59 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/26 03:16:23 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	int	r,s,t;
	
	r = ft_str_is_uppercase("AVSFDFFGWEFVGGWBGEDDSSCCSSCD");
	printf("%d \n", r);
	s = ft_str_is_uppercase("ADDEOVWOF{W!EFGGE_#%VDS$$%");
	printf("%d \n", s);
	t = ft_str_is_uppercase("");
	printf("%d \n", t);
}

