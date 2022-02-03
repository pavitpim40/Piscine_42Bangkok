/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 03:44:01 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/28 03:44:05 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *c);

int	main(void)
{
	char	*str = "Hello World";
	int	len;

	printf("Test case with --> %s\n", str);
	len = ft_strlen(str);
	printf("Word Count %d", len);
}
