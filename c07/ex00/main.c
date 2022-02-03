/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 12:51:38 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/03 17:08:55 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{		
	printf("%s\n", strdup("Hello All Piciner of 42 Bangkok"));
	printf("%s\n", ft_strdup("Hello All Piciner of 42 Bangkok"));
	printf("%s\n", strdup(""));
	printf("%s\n", ft_strdup(""));
	printf("%s\n", strdup("123H456@#$5"));
	printf("%s\n", ft_strdup("123H456@#$5"));
}
