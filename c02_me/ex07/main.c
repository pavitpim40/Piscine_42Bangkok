/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 03:34:54 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/26 03:48:54 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	p[100] = "acbsd341;3fAACd3v4sdaddadad";
	char	*r;

	r = ft_strupcase(p);
	printf("%s ",r);
}
