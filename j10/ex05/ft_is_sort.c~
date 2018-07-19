/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 13:29:22 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/19 13:40:52 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_intdiff(int nbr1, int nbr2)
{
	if (nbr1 < nbr2)
		return (-1);
	else if (nbr1 > nbr2)
		return (1);
	return (0);
}

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (i < length - 1)
	{
		if(f(tab[i],tab[i+1]) >= 0)
			return (0);
		i++;
	}
	return (1);
}

int main (void)
{
	int tab[5] = {15, 16, 17, 18, 19};

	printf("%d", ft_is_sort(tab, 5, ft_intdiff));
}
