/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:44:48 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/13 16:45:36 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 0;
	while (i <= length)
	{
		count = 1;
		while (j <= length)
		{
			if (j != i && tab[j] == tab[i])
				count ++;
			j++;
		}
		j = 0;
		if (count % 2 == 1)
			return (tab[i]);
		i++;
	}
	return (0);
}
