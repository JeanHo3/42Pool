/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 09:20:56 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/19 13:29:03 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_count_if(char **tab, int(*f)(char*))
{
	int count;
	int idx;

	idx = 0;
	count = 0;
	while(tab[idx] != 0)
	{
		
		if(f(tab[idx]) == 1)
			count++;
		idx++;
	}
	return (count);
}
