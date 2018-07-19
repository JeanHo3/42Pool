/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 20:18:01 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/15 20:18:02 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonction.h"

int		ft_verif_entry(char **argv)
{
	int		colonne;
	int		ligne;
	char	nb;

	nb = '0';
	colonne = 1;
	ligne = 0;
	while (colonne < 10)
	{
		ligne = 0;
		while (argv[colonne][ligne] != '\0')
		{
			if (nb == argv[colonne][ligne])
				return (0);
			if (argv[colonne][ligne] >= '1' && argv[colonne][ligne] <= '9')
				nb = argv[colonne][ligne];
			ligne++;
		}
		colonne++;
	}
	return (1);
}

int		ft_verif(int argc, char **argv)
{
	int colonne;
	int ligne;

	colonne = 1;
	ligne = 0;
	if (argc != 10)
		return (0);
	while (colonne < 10)
	{
		ligne = 0;
		while (argv[colonne][ligne] != '\0')
		{
			if ((argv[colonne][ligne] >= '1' && argv[colonne][ligne] <= '9') ||
					argv[colonne][ligne] == '.')
				ligne++;
			else
				return (0);
		}
		if (ligne != 9)
			return (0);
		colonne++;
	}
	if (ft_verif_entry(argv) == 0)
		return (0);
	return (1);
}
