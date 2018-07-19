/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 16:34:33 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/19 17:38:55 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void ft_sort_wordtab(char **tab)
{
	int i;
	int j;
	int nbwords;
	char *tmp;
	
	i = 0;
	tmp = 0;
	nbwords = 0;
	while (tab[nbwords])
		nbwords++;
	i = -1;
	while (i++ < nbwords - 2)
	{
		j = i;
		while (j++ < nbwords - 1)
		{
			if (ft_strcmp(tab[i],tab[j]) > 0)
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
		}
	}
}
