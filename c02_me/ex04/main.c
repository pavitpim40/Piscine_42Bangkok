/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 16:19:53 by ppimchan          #+#    #+#             */
/*   Updated: 2022/01/26 18:33:48 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	int	r,s,t;
	
	r = ft_str_is_lowercase("abdfdlpwlprwdlpwdfwwgkwgwtweswflsfwfw");
	printf("%d \n", r);
	s = ft_str_is_lowercase("abdfdlpwlpr!$#$FwAlpwdfwf[wgkwgwtweswflsfwfw");
	printf("%d \n", s);
	t = ft_str_is_lowercase("");
	printf("%d \n", t);
}

