/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doduval <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 13:15:26 by doduval           #+#    #+#             */
/*   Updated: 2018/07/07 14:31:28 by doduval          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	fct(int x, int y, int a, int b)
{
	if (a == 1 && (b == 1 || b == y))
		ft_putchar('A');
	else if (a == x && (b == 1 || b == y))
		ft_putchar('C');
	else if ((b == 1 || b == y) && (a > 1 && a < x))
		ft_putchar('B');
	else if ((a == 1 || a == x) && (b > 1 && b < y))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush03(int x, int y)
{
	int a;
	int b;

	a = 1;
	b = 1;
	while (b <= y)
	{
		while (a <= x)
		{
			fct(x, y, a, b);
			a++;
		}
		b++;
		a = 1;
		ft_putchar('\n');
	}
}
