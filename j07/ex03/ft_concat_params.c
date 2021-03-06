/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 21:36:23 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/17 18:10:32 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_printresult(int argc, char **argv, char *result)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		str = argv[i];
		while (str[j] != '\0')
		{
			result[k] = str[j];
			j++;
			k++;
		}
		if(i != argc-1)
			result[k] = '\n';
		k++;
		i++;
	}
}

int		ft_countsize(int argc, char **argv)
{
	int		k;
	int		i;
	int		nbr_car;
	char	*str;

	nbr_car = 0;
	k = 1;
	while (k <= argc)
	{
		i = 0;
		str = argv[k];
		while (str[i] != '\0')
		{
			nbr_car++;
			i++;
		}
		nbr_car += 1;
		k++;
	}
	return (nbr_car);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*result;
	char	t[1];
	int		size;

	t[0] = ' ';
	result = &t[0];
	size = ft_countsize(argc - 1, argv);
	result = (char*)malloc(sizeof(*result) * size);
	ft_printresult(argc, argv, result);
	result[size] = '\0';
	return (result);
}
