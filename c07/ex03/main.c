/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:32:51 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/04 01:56:15 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
char	*ft_strjoin(int size, char **str, char *sep);

int	main(void)
{	
	char **mystr;
	
	mystr = malloc(sizeof (char *) * 3);
	mystr[0] = "ME5555ME";
	mystr[1] = "EE1111XX";
	mystr[2] = "CE^^^^!XA";
	printf("%s\n",ft_strjoin(2,mystr,"+++"));
		
}
