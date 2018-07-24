/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 13:41:58 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/20 13:46:55 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do-op.h"
#include "ft_opp.h"

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

int		ft_atoi(char *str)
{
	int i;
	int nbr;
	int negative;

	nbr = 0;
	negative = 0;
	i = 0;
	while ((str[i] == '\n') || (str[i] == '\t') ||
		   (str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		negative = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\n' && (str[i] >= '0') && (str[i] <= '9'))
	{
		nbr *= 10;
		nbr += str[i] - '0';
		i++;
	}
	if (negative == 1)
		return (-nbr);
	else
		return (nbr);
}

int		ft_usage(int valid_opp, int b)
{
	int i;

	i = 0;
	if (valid_opp == 0 && b == 0)
	{
		ft_putstr("error : only [ ");
		while (g_opptab[i].opp)
		{
			if (!(ft_strcmp(g_opptab[i].opp,"") == 0))
			{
				ft_putstr(g_opptab[i].opp);
				ft_putchar(' ');
			}
			i++;
		}
		ft_putstr("] are accepted.");
	}
	return (1);
}

void	ft_isopp(char **av)
{
	int valid_opp;
	int i;

	i = 0;
	valid_opp = 0;
	while (g_opptab[i].opp)
	{
		if (ft_strcmp(av[2],g_opptab[i].opp) == 0)
		{
			valid_opp = 1;
			if (ft_strcmp(g_opptab[i].opp,"/") && ft_strcmp(av[3],"0") == 0)
				ft_putstr("Stop : division by zero");
			else if (ft_strcmp(g_opptab[i].opp,"%") && ft_strcmp(av[3],"0") == 0)
				ft_putstr("Stop : modulo by zero");
			else
				ft_putnbr(g_opptab[i].f(ft_atoi(av[1]),ft_atoi(av[3])));
		}
		i++;
	}
	if (valid_opp == 0)
		i = ft_usage(valid_opp,0);
}

int		main (int argc, char **argv)
{
	if (argc == 4)
		ft_isopp(argv);
	return (0);
}
