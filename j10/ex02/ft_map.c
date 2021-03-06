/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 08:45:10 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/22 21:50:22 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>


int		ft_any(int nbr)
{
	return (nbr*nbr);
}

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *tabr;

	i = 0;
	tabr = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		tabr[i] = f(tab[i]);
		i++;
	}
	return (tabr);
}

int main (void)
{
	int tab[10] = {1,2,3,4,5,6,7,8,9,10};
	int *res;
	int i = 0;

	res = NULL;
	res = ft_map(tab, 10, &ft_any);
	
	while (i < 10)
	{
		printf("%d\n", res[i]);
		i++;
	}
	return (0);
}
