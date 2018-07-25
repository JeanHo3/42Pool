/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 10:52:41 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/17 20:11:11 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/*
** ft_strlen : renvoi la longueur de la chaine str
*/
int		ft_sl(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
** ft_rp : recursive power pour calculer le (base_size)^n
*/

int		ft_rp(int nb, int power)
{
	int res;

	res = 1;
	if (power < 0)
		return (0);
	if (power >= 1)
	{
		power--;
		res = ft_rp(nb, power);
		res = res * nb;
	}
	return (res);
}

/*
** ft_bdiv : retourne le n maximal de la puissance de la base_to_size qui rentre dans le nombre
*/

int		ft_bdiv(int nbr, int btsize)
{
	int div;
	int nbr1;

	nbr1 = nbr;
	div = 0;
	while (nbr1 > 0)
	{
		nbr1 = nbr1 / btsize;
		div++;
	}
	return (div);
}

/*
** ft_c10 : calcule la valeur decimale du nombre dans sa base from
*/

int		ft_c10(char *nbr, char *base_from, int bfsize)
{
	int result;
	int somme;
	int i;
	int j;
	int k;

	result = 0;
	somme = 0;
	i = ft_sl(nbr);
	j = 0;
	k = 0;
	while (i > 0)
	{
		j = 0;
		while (nbr[i - 1] != base_from[j] && j < bfsize)
			j++;
		if (j == bfsize)
			return (-1);
		else if (j >= 1)
			result += (j * ft_rp(bfsize, k));
		i--;
		k++;
	}
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		ca;
	int		bdiv;
	int		j;
	int		i;

	i = -1;
	ca = ft_c10(nbr, base_from, ft_sl(base_from));
	bdiv = ft_bdiv(ca, ft_sl(base_to));
	result = (char*)malloc(sizeof(char) * bdiv + 1);
	result[bdiv] = '\0';
	j = ft_sl(base_to);
	while (ca > 0)
	{
		if ((ca - (j * ft_rp(ft_sl(base_to), bdiv))) >= 0)
		{
			result[i++] = base_to[j];
			ca -= (j * ft_rp(ft_sl(base_to), bdiv--));
			j = ft_sl(base_to);
		}
		j--;
	}
	while (bdiv-- > -1)
		result[i + 1 +  bdiv] = base_to[0];
	return (result);
}
