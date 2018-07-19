/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 12:25:38 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/12 08:57:39 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int idx;
	int idx_tof;

	idx = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (str[idx] != '\0')
	{
		idx_tof = 0;
		while (to_find[idx_tof] == str[idx + idx_tof])
		{
			if (to_find[idx_tof + 1] == '\0')
				return (str + idx);
			idx_tof++;
		}
		idx++;
	}
	return (0);
}
