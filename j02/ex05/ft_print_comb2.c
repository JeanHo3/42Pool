/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 16:44:27 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/06 10:28:12 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_control_numbers(int i)
{
	int a;
	int b;

	a = 48 + (i % 10);
	b = 48 + ((i - i % 10) / 10);
	if (i < 10)
	{
		ft_putchar('0');
		ft_putchar(a);
	}
	else
	{
		ft_putchar(b);
		ft_putchar(a);
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i <= 99)
	{
		while (j <= 99)
		{
			if (i != j && i < j)
			{
				ft_control_numbers(i);
				ft_putchar(' ');
				ft_control_numbers(j);
				if (i < 98)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			j++;
		}
		i++;
		j = 0;
	}
}
