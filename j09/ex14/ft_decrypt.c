/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 14:33:10 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/13 16:39:29 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct t_pers
{
    char *name;
    float life;
    int age;
    char *profession;
}   t_perso;

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
	return (nbr);
}

t_perso	**ft_decrypt(char *str)
{
	int		i;
	int		j;
	int k;
	int 	nb_joueur;
	t_perso	**tab_perso;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ';')
			nb_joueur++;
		i++;
	}
	if (nb_joueur != 0)
	{
		nb_joueur++;
		tab_perso = (t_perso**)malloc(sizeof(**tab_perso) * nb_joueur);
		i = 0;
		k = 0;
		while (str[i] != '\0')
		{
			while (str[k] != '|' && idx == 0)
			{
				k++;
				i++;	
			}
			i++;
		}
	}
	return (tab_perso);
}
