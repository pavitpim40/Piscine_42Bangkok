/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:58:56 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/04 03:59:29 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char dest[25] = "original ";
	char dest2[25] = "original ";
	char src[100] = "totobla bla";
//	char src[100] = "";
	unsigned int	len = 0;
	unsigned int	r;

	r = strlcat(dest,src,len);
	printf("%s %d\n" ,dest,r);
	r = ft_strlcat(dest2,src,len);
	printf("%s %d\n" ,dest,r);
}
