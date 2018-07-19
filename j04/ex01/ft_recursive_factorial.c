/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 15:56:58 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/09 15:57:01 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int res;

	res = 1;
	if (nb >= 0 && nb < 2)
		return (1);
	if (nb < 1 || nb > 12)
		return (0);
	if (nb > 1)
	{
		res = ft_recursive_factorial(nb - 1);
		res = res * nb;
	}
	return (res);
}
