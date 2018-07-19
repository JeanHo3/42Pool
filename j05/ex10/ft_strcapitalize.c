/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 11:45:06 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/12 18:25:14 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] >= 'A' && str[idx] <= 'Z')
			str[idx] = str[idx] + 32;
		if ((str[idx - 1] <= 48 || str[idx - 1] >= 57) &&
			(str[idx] >= 'a' && str[idx] <= 'z') &&
			(str[idx - 1] < 'A' || (str[idx - 1] > 'Z' && str[idx - 1] < 'a') ||
			 str[idx - 1] > 'z'))
			str[idx] = str[idx] - 32;
		idx++;
	}
	return (str);
}
