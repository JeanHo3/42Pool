/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 13:45:52 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/13 16:46:32 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fight.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_fight(t_perso *atknt, t_perso *atke, char *type_atk)
{
	if (!(atknt->life <= 0.0 || atke->life <= 0.0))
	{
		if (ft_strcmp(type_atk, "judo kick") == 0)
			atke->life -= 15;
		else if (ft_strcmp(type_atk, "judo punch") == 0)
			atke->life -= 5;
		else
			atke->life -= 20;
		ft_putstr(atknt->name);
		ft_putstr(" does a ");
		ft_putstr(type_atk);
		ft_putstr(" on ");
		ft_putstr(atke->name);
		ft_putstr("\n");
		if (atke->life <= 0.0)
		{
			ft_putstr(atke->name);
			ft_putstr(" is dead\n");
		}
	}
}
