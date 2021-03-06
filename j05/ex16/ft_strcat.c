/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 14:36:14 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/12 09:53:27 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int idx_src;
	int idx_dest;

	idx_dest = 0;
	idx_src= 0;
	while (dest[idx_dest] != '\0')
		idx_dest++;
	while (src[idx_src] != '\0')
	{
		dest[idx_dest + idx_src] = src[idx_src];
		idx_src++;
	}
	dest[idx_dest + idx_src] = '\0';
	return (dest);
}
