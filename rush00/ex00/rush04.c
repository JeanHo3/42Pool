/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcherret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 13:32:05 by tcherret          #+#    #+#             */
/*   Updated: 2018/07/07 14:51:59 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int x, int y, int a, int b)
{
	if ((a == 1 && b == 1) || (a == x && b == y))
	{
		ft_putchar('A');
	}
	else if ((a == 1 && b == y) || (a == x && b == 1))
	{
		ft_putchar('C');
	}
	else if ((b >= 1 && b <= y) && (a == 1 || a == x))
	{
		ft_putchar('B');
	}
	else if ((b == 1 || b == y) && (a > 1 && a < x))
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
	if (a == x)
	{
		ft_putchar('\n');
	}
}

void	rush04(int x, int y)
{
	int a;
	int b;

	a = 1;
	b = 1;
	while (b <= y)
	{
		while (a <= x)
		{
			ft_print(x, y, a, b);
			a++;
		}
		a = 1;
		b++;
	}
}
