/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 17:47:00 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/24 17:59:39 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list*nextit;
	unsigned int i;
	unsigned int nbrelem;

	nextit = begin_list;
	i = 0;
	nbrelem = 0;
	if (nbr <= 0)
		return (NULL);
	while (i < nbr - 1)
	{
		if (!nextit)
			return (NULL);
		else if (nextit->next)
		{
			nextit = nextit->next;
			nbrelem++;
		}
		i++;
	}
	if(nbrelem < nbr - 1)
		return (NULL);
	return (nextit);
}

int		ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*last;

	count = 0;
	last = begin_list;
	while (last->next != NULL)
	{
		last = last->next;
		count++;
	}
	return (count + 1);
}

void	ft_list_reverse(t_list **begin_list)
{
	int		list_size;
	int		start;
	t_list	*first_replace;
	t_list	*by_last;

	start = 0;
	if ((*begin_list))
	{
		list_size = ft_list_size(*begin_list);
		while (start < (list_size/2))
		{
			
		}
}
