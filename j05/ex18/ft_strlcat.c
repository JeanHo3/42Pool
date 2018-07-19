/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 17:24:25 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/12 18:55:19 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int len_cat;

	j = 0;
	len_cat = 0;
	i = ft_strlen(src);

	while (dest[j] != '\0' && j < size && dest[i] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < size)
		return (size + i);
	dest[i + j] = '\0';
	return (i+j);
}
