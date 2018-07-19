/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_grille.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 20:20:44 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/15 20:21:04 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonction.h"

int		ft_test_ligne(char nb, char grille[9][9], int ligne)
{
	int colonne;

	colonne = 0;
	while (colonne < 9)
	{
		if (grille[colonne][ligne] == nb)
			return (1);
		colonne++;
	}
	return (0);
}

int		ft_test_colonne(char nb, char grille[9][9], int colonne)
{
	int ligne;

	ligne = 0;
	while (ligne < 9)
	{
		if (grille[colonne][ligne] == nb)
			return (1);
		ligne++;
	}
	return (0);
}

int		ft_test_case(char nb, char grille[9][9], int colonne, int ligne)
{
	int colonne_bis;
	int ligne_bis;

	ligne_bis = ligne - (ligne % 3);
	colonne_bis = colonne - (colonne % 3);
	colonne = colonne_bis;
	while (colonne < colonne_bis + 3)
	{
		ligne = ligne_bis;
		while (ligne < ligne_bis + 3)
		{
			if (grille[colonne][ligne] == nb)
				return (1);
			ligne++;
		}
		colonne++;
	}
	return (0);
}

int		ft_new_grille(char grille[9][9], int position)
{
	int		colonne;
	int		ligne;
	char	nb;

	colonne = position / 9;
	nb = '1';
	ligne = position % 9;
	if (position == 81)
		return (1);
	if (grille[colonne][ligne] != '.')
		return (ft_new_grille(grille, position + 1));
	while (nb <= '9')
	{
		if (ft_test_ligne(nb, grille, ligne) == 0 &&
				ft_test_colonne(nb, grille, colonne) == 0 &&
				ft_test_case(nb, grille, colonne, ligne) == 0)
		{
			grille[colonne][ligne] = nb;
			if (ft_new_grille(grille, position + 1))
				return (1);
		}
		nb++;
	}
	grille[colonne][ligne] = '.';
	return (0);
}
