/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 14:15:54 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/24 17:39:19 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_print_list(t_list *list, int type)
{
	int idx = 1;
	t_list *temp;

	temp = list;
	while(temp)
    {
		if (type == 1)
			printf("Structure %d, %d\n", idx,(int)temp->data);
		else if (type == 2)
			printf("Structure %d, %s\n", idx,(char*)temp->data);
        temp = temp->next;
        idx++;
    }
}

int main(int argc, char **argv)
{
	t_list	*active;
	t_list	*temp;
	t_list	*newl;
	int e7 = 1;

	active = NULL;
	newl = NULL;
	active = ft_create_elem((int*)5);
	active->next = ft_create_elem((int*)10);
	ft_list_push_back(&active,(int*)40);
	ft_list_push_front(&active,(int*)78);
	ft_list_push_back(&active,(int*)-10);
	ft_list_push_front(&active,(int*)-40);
	printf("Taille de la liste : %d\n",ft_list_size(active));
	temp = ft_list_last(active);
	printf("Valeur du dernier item : %d\n", (int)temp->data);
	ft_print_list(active, 1);
	ft_list_push_front(&active,(int*)-100);
	ft_print_list(active, 1);
	ft_list_clear(&(active));
	newl = ft_list_push_params(argc, argv);
	ft_print_list(newl, 2);
	temp = ft_list_at(newl, e7);
	if (temp)
		printf("Valeur de l'element %d de la liste : %s", e7, (char*)temp->data);
	return (0);
}
