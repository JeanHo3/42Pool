/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 11:26:07 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/11 18:16:39 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] >= 97 && str[idx] <= 122)
			str[idx] = str[idx] - 32;
		idx++;
	}
	return (str);
}
