/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 20:14:50 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/15 21:29:14 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonction.h"

int		main(int argc, char **argv)
{
	int		colonne;
	int		ligne;
	char	grille[9][9];

	colonne = 0;
	ligne = 0;
	if (ft_verif(argc, argv) == 1)
	{
		while (colonne < 9)
		{
			ligne = -1;
			while (++ligne < 9)
				grille[colonne][ligne] = argv[colonne + 1][ligne];
			colonne++;
		}
		if (ft_new_grille(grille, 0) == 1)
			ft_display(grille);
		else
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
	return (0);
}
