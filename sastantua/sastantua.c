/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 17:59:28 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/08 23:17:45 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);


void	ft_controle()
{
	
	blanks = 0;
	if (j == l)
	{
		m++;
		stepb++;
		l = m + l; //l=3 + 1 + 3 : l = 7
		neg = neg + 2;
		if (stepb == 3)
		{
			stepb = 1;
			neg += 1;
		}
	}
	while (blanks < (y / 2) - j - neg)
	{
		ft_putchar(' ');
		blanks++;
	}
	ft_putchar('/');
	etoile = 0;
	p++;
}

void	ft_dessine1(int x, int y)
{
	int j;
    int blanks;
    int etoile;
    int l;
    int m;
    int p;
    int neg;
    int stepb;
	
	j = 0;
    l = 3;
	m = 3;
	p = 0;
    neg = 0;
	stepb = 0;
	while (j < x)
    {
        blanks = 0;
        if (j == l)
        {
            m++;
            stepb++;
            l = m + l; //l=3 + 1 + 3 : l = 7
            neg = neg + 2;
            if (stepb == 3)
            {
                stepb = 1;
                neg += 1;
            }
        }
        while (blanks < (y / 2) - j - neg)
        {
            ft_putchar(' ');
            blanks++;
        }
        ft_putchar('/');
        etoile = 0;
		p++;
        while(etoile < j + p + 2*neg)
		{
            ft_putchar('*');
            etoile++;
		}
        ft_putchar('\\');
        ft_putchar('\n');
		j++;
    }
}

void sastantua(int size)
{
	int nblignes;
	int nbcolonnes;
	int i;

	nblignes = 0;
	nbcolonnes = 0;
	i = 0;
	while (i < size)
	{
		nblignes += 3 + i;
		i++;
	}
	nbcolonnes = (2 * nblignes) + (4 * (size - 1)) + 1;
	ft_dessine1(nblignes,nbcolonnes);
}

int main()
{
	sastantua(2);
}
