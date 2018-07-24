/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 15:51:39 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/24 17:38:44 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*nextit;
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
