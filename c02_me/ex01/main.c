/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 03:56:51 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/26 18:30:36 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

char	*ft_strncpy(char *dest,char *src,unsigned int n);

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
	char	d[6];
	char	s[] = "Hello 42 Bangkok";
	char	*r;
	int	i;

	i = 0;
	r = ft_strncpy(d, s, 3);
	ft_putstr(r);
	r = strncpy(d, s, 3);
	ft_putstr(r);
}
