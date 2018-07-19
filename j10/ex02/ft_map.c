/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 08:45:10 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/19 13:26:01 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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
