/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 09:03:48 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/07 13:35:10 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

/*
**Fonction that prints one line on conditions
*/

void	ft_line(int x, int y, int a, int b)
{
	if ((b == 1 && (a == 1 || a == x)) || (b == y && (a == 1 || a == x)))
		ft_putchar('o');
	else if ((b == 1 && (a > 1 && a < x)) || (b == y && (a > 1 && a < x)))
		ft_putchar('-');
	else if ((a == 1 && (b > 1 && b < y)) || (a == x && (b > 1 && b < y)))
		ft_putchar('|');
	else
		ft_putchar(' ');
	if (a == x)
		ft_putchar('\n');
}

/*
** Fonction rush00 to manage the print grid
*/

void	rush00(int x, int y)
{
	int a;
	int b;

	a = 1;
	b = 1;
	while (b <= y)
	{
		while (a <= x)
		{
			ft_line(x, y, a, b);
			a++;
		}
		a = 1;
		b++;
	}
}
