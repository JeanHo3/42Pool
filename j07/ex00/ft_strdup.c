/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:52:03 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/16 18:25:12 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*src_copy;
	int		idx;

	idx = 0;
	src_copy = (char*)malloc(sizeof(*src_copy) * (ft_strlen(src) + 1));
	while (idx < ft_strlen(src) + 1)
	{
		src_copy[idx] = src[idx];
		idx++;
	}
	return (src_copy);
}
