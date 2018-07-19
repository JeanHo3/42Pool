/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 20:20:29 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/15 20:20:32 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fonction.h"

void	ft_display(char grille[9][9])
{
	int colonne;
	int ligne;

	colonne = 0;
	ligne = 0;
	while (colonne < 9)
	{
		ligne = 0;
		while (ligne < 9)
		{
			ft_putchar(grille[colonne][ligne]);
			if (ligne != 8)
				ft_putchar(' ');
			ligne++;
		}
		ft_putchar('\n');
		colonne++;
	}
}
