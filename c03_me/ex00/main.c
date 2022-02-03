/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:21:21 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/26 20:22:18 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	char a[100];
	char b[100];
	strcpy(a, "A02");
	strcpy(b, "A0z");
	printf("Result %i\n", ft_strcmp(a,b));
	printf("Correction %i\n", strcmp(a,b));
}
