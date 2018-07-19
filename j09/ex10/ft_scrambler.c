/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:48:46 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/13 16:37:49 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int temp_c;
	int temp_d;
	int temp_b;

	temp_c = *******c;
	temp_d = ****d;
	temp_b = *b;

	*******c = ***a;
	****d = temp_c;
	*b = temp_d;
	***a = temp_b;
}