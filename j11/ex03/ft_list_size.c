/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 19:45:12 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/19 19:48:32 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_list_size(t_list *begin_list)
{
	int count;
	t_list	*last;

	count = 0;
	last = begin_list;
	while (last->next != NULL)
	{
		last = last->next;
		count++;
	}
	return (count);
}
