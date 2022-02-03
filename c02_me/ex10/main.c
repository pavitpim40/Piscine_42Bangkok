/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 16:20:06 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/04 01:24:05 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int	main(void)
{
	char	dest[100];
	char	src[] = "bhS <=> 6AEPhe <=> 5FHndKgQ <=> 7D <=> 7evhY <=> 15mRCTM <=> 15aawriAq <=> 17vvhuA <=> 5mIj <=> 15 <=> 15MMdE";
	unsigned int	size = 100;
	unsigned int	length;

	length = strlcpy(dest, src, size);
	printf("------------ original function -----------\n");
	printf("%s\n",dest);
	printf("%s\n",src);
	printf("%d\n",length);
	
	printf("--------------- my function --------------\n");
	length = ft_strlcpy(dest, src, size);
	printf("%s\n",dest);
	printf("%s\n",src);
	printf("%d\n",length);
}
