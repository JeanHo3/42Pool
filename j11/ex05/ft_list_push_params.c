/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 20:10:39 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/19 20:21:07 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list **list;
	int i;

	i = 2;
	list = NULL;
	if (ac >= 2)
	{
		while (i <= ac)
		{
			ft_list_push_front(list, av[i]);
			i++;
		}
		return (*list);
	}
	return (NULL);
}
