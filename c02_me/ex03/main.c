/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:00:32 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/26 18:32:41 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	int	r,s,t,p;
	
	r = ft_str_is_numeric("012314323250040094331213");
	printf("%d \n",r);
	s = ft_str_is_numeric("01231!#!@s432ad3250040094331213");
	printf("%d \n",s);
	t = ft_str_is_numeric("abasdaasddad");
	printf("%d \n",t);
	p = ft_str_is_numeric("");
	printf("%d \n",p);
}
