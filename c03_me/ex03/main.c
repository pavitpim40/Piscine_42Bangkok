/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:42:02 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/27 21:21:10 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	d1[100] = "Hello";
	char	d2[100] = "Hello";
	char	src[100] = "42 Bangkok";
	
	printf("%s\n", ft_strncat(d1,src,99));
	printf("%s\n", strncat(d2,src,99));
}
