/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 14:05:27 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/26 03:03:05 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	int	r;
	int	s;
	int	t;

	r = ft_str_is_alpha("HelloMynameisPavit");
	printf(">>OnlyChar return = %d\n", r);		
	s = ft_str_is_alpha("HelloMy$$@!S2X+!sPavit");
	printf(">>Not OnlyChar return = %d\n", s);	
	t = ft_str_is_alpha("");
	printf(">>Empty String return = %d\n", t);
}
