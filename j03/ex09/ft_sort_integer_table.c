/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 08:46:16 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/08 10:07:14 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int c;
	i = 0;
	j = 1;
	while(i < (size - 1))
	{
		while (j <= (size - 1))
		{
			if(tab[j] < tab[i])
			{
				c = tab[i];
				tab[i] = tab[j];
				tab[j] = c;
			}
			j++;
		}
		printf("i = %d // j = %d // tab[%d] = %d\n",i,j,i,tab[i]);
		i++;
		j = i + 1;
	}
}
