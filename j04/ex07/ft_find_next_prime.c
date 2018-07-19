/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 15:31:02 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/09 20:00:56 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;
	int mod;

	i = 2;
	if (nb < 2 || (nb % 2 == 0 && nb != 2))
		return (0);
	mod = nb % i;
	while (mod != 0 && i < 46340)
	{
		i++;
		mod = nb % i;
	}
	if (mod != 0 || i == 46340 || i == nb)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	int reach;

	reach = nb;
	while (ft_is_prime(reach) == 0)
		reach++;
	return (reach);
}
