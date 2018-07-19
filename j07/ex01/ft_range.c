/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 18:50:43 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/12 21:55:24 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int idx;

	idx = 0;
	if (min >= max)
		return (0);
	else
	{
		tab = (int*)malloc(sizeof(int) * (max - min - 1));
		while (min < max)
		{
			tab[idx] = min;
			min++;
			idx++;
		}
		return (tab);
	}
}
