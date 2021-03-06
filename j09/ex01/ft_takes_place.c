/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 09:10:27 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/13 16:44:23 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define AM ".00 A.M."
#define PM ".00 P.M."

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		ft_putchar(str[idx]);
		idx++;
	}
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * (-1);
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar((nbr % 10) + '0');
}

void	ft_takes_place(int hour)
{
	int last_h;
	int next_h;

	last_h = hour / 100;
	next_h = last_h + 1;

	ft_putstr("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (last_h == 23)
		next_h = 0;
	ft_putnbr(last_h);
	if (last_h >= 12)
		ft_putstr(PM);
	else
		ft_putstr(AM);
	ft_putstr(" AND ");
	ft_putnbr(next_h);
	if (next_h >= 11 )
		ft_putstr(PM);
	else
		ft_putstr(AM);
}
