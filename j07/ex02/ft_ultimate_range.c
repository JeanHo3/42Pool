/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 19:23:52 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/15 21:41:20 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int idx;
	int *tab;

	idx = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	else
	{
		tab = (int*)malloc(sizeof(*tab) * (max - min + 1));
		while (min < max)
		{
			tab[idx] = min;
			idx++;
			min++;
		}
		tab[idx] = '\0';
		*range = tab;
		return (idx);
	}
}
