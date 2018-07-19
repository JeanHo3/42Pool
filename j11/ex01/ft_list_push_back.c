/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 18:27:42 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/19 19:35:24 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *temp;
	t_list *last;

	last = *begin_list;
	temp = ft_create_elem(data);
	if (*begin_list == NULL)
		*begin_list = temp;
	else
	{
		while(last->next != NULL)
			last = last->next;
		last->next = temp;
	}
}
