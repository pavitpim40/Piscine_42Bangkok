/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 01:12:23 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/26 02:37:56 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

void	ft_putstr(char *str)			
{
	int	i;

	i = 0;
	while (*(str + i))
		i++;
	write(1, str, i);
}


int	main(void)
{
	char	*result;
	char	dest[200];

	result = ft_strcpy(dest, "Hello 42 Bangkok");	
	ft_putstr(result);
	
}
