/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/07 16:24:43 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/09 18:35:27 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	else
	{
		while (nb > 0)
		{
			res = res * nb;
			nb--;
		}
	}
	return (res);
}
