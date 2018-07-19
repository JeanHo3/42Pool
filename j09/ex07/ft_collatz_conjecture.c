/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 16:01:19 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/13 16:37:09 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	unsigned int k;

	k = 0;
	if (base > 1)
	{
		k++;
		if (base % 2 == 0)
			base /= 2;
		else
			base = (base * 3) + 1;
		k = k + ft_collatz_conjecture(base);
	}
	return (k);
}
