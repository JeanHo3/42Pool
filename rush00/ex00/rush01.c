/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcherret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 09:57:31 by tcherret          #+#    #+#             */
/*   Updated: 2018/07/07 13:55:10 by tcherret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print(int x, int y, int a, int b)
{
	if ((a == 1 && b == 1) || (a == x && b == y))
	{
		ft_putchar('/');
	}
	else if ((a == 1 && b == y) || (a == x && b == 1))
	{
		ft_putchar('0' + 44);
	}
	else if ((b >= 1 && b <= y) && (a == 1 || a == x))
	{
		ft_putchar('*');
	}
	else if ((b == 1 || b == y) && (a > 1 && a < x))
	{
		ft_putchar('*');
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

void	rush(int x, int y)
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
