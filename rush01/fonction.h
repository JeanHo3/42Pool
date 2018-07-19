/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 20:13:26 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/15 20:20:09 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FONCTION_H
# define FONCTION_H

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_display(char grille[9][9]);

int		ft_verif(int argc, char **argv);

int		ft_new_grille(char grille[9][9], int position);

int		ft_verif_grille(char grille[9][9]);

#endif
