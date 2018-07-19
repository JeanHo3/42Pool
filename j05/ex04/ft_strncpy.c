/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 18:01:33 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/12 20:17:17 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int idx;
	unsigned int size;

	idx = 0;
	size = 0;
	while (src[size] != '\0')
		size++;
	while (idx < n && src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	if (size < n)
	{
		while (dest[idx] != '\0')
		{
			dest[idx] = '\0';
			idx++;
		}
	}
	return (dest);
}
