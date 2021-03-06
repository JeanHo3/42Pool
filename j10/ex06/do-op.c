/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 13:41:58 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/21 10:15:09 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do-op.h"
#include <stdio.h>

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

int		main (int argc, char **argv)
{
	int (*f[5])(int a, int b) = {ft_add, ft_sub, ft_div, ft_mod, ft_mul};

	if (argc == 4)
	{
		if (ft_strcmp(argv[2],"+") != 0 && ft_strcmp(argv[2],"-") != 0 &&
			ft_strcmp(argv[2],"/") != 0 && ft_strcmp(argv[2],"*") != 0 && ft_strcmp(argv[2],"%") != 0)
			ft_putchar('0');
		else if (ft_strcmp(argv[2],"+") == 0)
			ft_putnbr(f[0](ft_atoi(argv[1]),ft_atoi(argv[3])));
		else if (ft_strcmp(argv[2],"-") == 0)
			ft_putnbr(f[1](ft_atoi(argv[1]),ft_atoi(argv[3])));
		else if (ft_strcmp(argv[2],"/") == 0)
		{
			if (ft_strcmp(argv[3],"0") == 0)
				ft_putstr("Stop : division by zero");
			else
				ft_putnbr(f[2](ft_atoi(argv[1]),ft_atoi(argv[3])));
		}
		else if (ft_strcmp(argv[2],"%") == 0)
		{
			if (ft_strcmp(argv[3],"0") == 0)
				ft_putstr("Stop : modulo by zero");
			else
				ft_putnbr(f[3](ft_atoi(argv[1]),ft_atoi(argv[3])));
		}
		else if (ft_strcmp(argv[2],"*") == 0)
			ft_putnbr(f[4](ft_atoi(argv[1]),ft_atoi(argv[3])));
	}
	ft_putchar('\n');
	return (0);
}
