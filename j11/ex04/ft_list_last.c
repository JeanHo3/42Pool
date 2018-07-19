/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 20:00:33 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/19 20:10:19 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*last;

	last = begin_list;
	if (begin_list == NULL)
		return (begin_list);
	else
	{
		while (last->next != NULL)
			last = last->next;
	}
	return (last);
}
