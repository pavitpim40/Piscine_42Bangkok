/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 04:15:01 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/26 04:18:56 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	src[100] = "asdcaAAAAABBBZZZZAS12342%$@DCW@!D01230";
	char	*des;
	
	des = ft_strlowcase(src);
	printf("%s ", src);
}
