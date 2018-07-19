/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 14:37:43 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/06 08:17:32 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i <= 999)
	{
		j = ((i % 100 - i % 10) / 10);
		k = ((i - i % 100) / 100);
		if (k != j && j != i % 10 && k != i % 10)
		{
			if (k < j && j < i % 10)
			{
				ft_putchar(48 + k);
				ft_putchar(48 + j);
				ft_putchar(48 + i % 10);
				if (i < 789)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
		i++;
	}
}
