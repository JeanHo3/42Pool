/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 09:09:27 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/22 22:01:50 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_countwords(char *str)
{
	int idx;
	int word_size;
	int nb_words;

	idx = 0;
	word_size = 0;
	nb_words = 0;
	while (str[idx] != '\0')
	{
		if ((str[idx] == ' ' || str[idx] == '\t' || str[idx] == '\n'))
			word_size = 0;
		else
			word_size++;
		if (word_size == 1)
			nb_words++;
		idx++;
	}
	return (nb_words);
}

char	*ft_alloc_word(char *str, int *w_size, int *i)
{
	char*word;
	int idxt;
	int value;

	value = 0;
	idxt = 0;
	(*w_size) = 0;
	while (!(str[*i] == ' ' || str[*i] == '\t' ||
			 str[*i] == '\n' || str[*i] == '\0'))
	{
		(*i)++;
		(*w_size)++;
	}
	word = (char*)malloc(sizeof(char) * (*w_size) + 1);
	while ((*w_size) > 0)
	{
		word[idxt] = str[*i - (*w_size)];
		idxt++;
		(*w_size)--;
	}
	word[idxt] = '\0';
	*w_size = 0;
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	int idx;
	int idxt;
	int idxta;
	int word_size;
	char**tab_words;

	idx = 0;
	idxt = 0;
	idxta = 0;
	word_size = 0;
	tab_words = (char**)malloc(sizeof(char*) * ft_countwords(str) + 1);
	while (str[idx] != '\0')
	{
		if (str[idx] == ' ' || str[idx] == '\t' || str[idx] == '\n')
			idx++;
		else
		{
			tab_words[idxta] = ft_alloc_word(str, &word_size, &idx);
			idxta++;
		}
	}
	tab_words[idxta] = 0;
	return (tab_words);
}

int		ft_test(char *str)
{
	int i = 0;

	while (str[i])
	{
		if(str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

int		ft_any(char **tab, int(*f)(char*))
{
	int i = 0;

	while(tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}

int main (int ac, char **av)
{
	char **tab1;

	if (ac == 2)
	{
		tab1 = ft_split_whitespaces(av[1]);
		printf("%d", ft_any(tab1, &ft_test));
	}
	return (0);
}
