/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 09:15:21 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/16 16:50:15 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ischarset(char *charset, char c)
{
	int i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_countwords(char *str, char *charset)
{
	int idx;
	int word_size;
	int nb_words;

	idx = 0;
	word_size = 0;
	nb_words = 0;
	while (str[idx] != '\0')
	{
		if (ft_ischarset(charset, str[idx]) == 1)
			word_size = 0;
		else
			word_size++;
		if (word_size == 1)
			nb_words++;
		idx++;
	}
	return (nb_words);
}

char	*ft_alloc_word(char *str, char *charset, int *w_size, int *i)
{
	char	*word;
	int		idxt;
	int		value;

	value = 0;
	idxt = 0;
	(*w_size) = 0;
	while (ft_ischarset(charset, str[*i]) == 0)
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

char	**ft_split(char *str, char *charset)
{
	int		idx;
	int		idxt;
	int		idxta;
	int		word_size;
	char	**tab_words;

	idx = 0;
	idxt = 0;
	idxta = 0;
	word_size = 0;
	tab_words = (char**)malloc(sizeof(char*) * ft_countwords(str, charset) + 1);
	while (str[idx] != '\0')
	{
		if (ft_ischarset(charset, str[idx]) == 0)
		{
			tab_words[idxta] = ft_alloc_word(str, charset, &word_size, &idx);
			idxta++;
		}
		idx++;
	}
	tab_words[idxta] = 0;
	return (tab_words);
}
