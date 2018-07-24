/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 20:26:07 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/24 15:42:40 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*temp;
	t_list	*next;

	temp = (*begin_list);
	while (temp)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	(*begin_list) = NULL;;
}
