/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 23:23:16 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/26 23:24:54 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{	
	char	dest[100] = "Hello ";
	char	d2[100] = "Hello ";
	printf("%s\n", ft_strcat(dest , "bbb"));
	printf("%s\n", strcat(d2 , "bbb"));
}
