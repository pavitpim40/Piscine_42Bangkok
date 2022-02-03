/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:28:23 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/27 16:29:01 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	src[100] = "The Boy who lived";
	char	to_find[100] = "who";
	char	to_find2[100] = "wx0";
	
	printf("%s\n", strstr(src,to_find));	
	printf("%s\n", ft_strstr(src,to_find));

	printf("%s\n", strstr(src,""));	
	printf("%s\n", ft_strstr(src,""));	
	
	printf("%s\n", strstr(src,to_find2));	
	printf("%s\n", ft_strstr(src,to_find2));	
}
