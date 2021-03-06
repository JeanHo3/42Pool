/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 08:45:10 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/18 09:07:14 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_sqrt(int nb);

void	ft_putchar(char c);

void	ft_putnbr(int nb);

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
	int tab[] = {64, 25, 81, 100, 9, 16};
	int len = 6;
	int *tabr;
	int i = 0;

	tabr = ft_map(tab, len, &ft_sqrt);
	while (i < len)
	{
		ft_putnbr(tabr[i]);
		ft_putchar('\n');
		i++;
	}
}
