/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppimchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:55:23 by ppimchan          #+#    #+#             */
/*   Updated: 2022/02/02 22:38:11 by ppimchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{	
		if (s1[i] != s2[i])
			break ;
		i ++;
	}
	return (s1[i] - s2[i]);
}

void	ft_putnstr(char **str, int length)
{
	int	i;
	int	count;

	count = 1;
	i = 0;
	while (count < length)
	{
		i = 0;
		while (str[count][i] != '\0')
		{
			write(1, &str[count][i], 1);
			i ++;
		}	
		write (1, "\n", 1);
		count ++;
	}
}

void	ft_sort_params(char *tab[], int length)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	j = 1;
	while (i < length)
	{	
		j = 1;
		while (j < length - i)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}			
			j ++;
		}
		i ++;
	}
	ft_putnstr(tab, length);
}

int	main(int argc, char *argv[])
{
	ft_sort_params(argv, argc);
}
