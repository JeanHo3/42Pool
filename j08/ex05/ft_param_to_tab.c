/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 13:45:03 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/18 14:32:09 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char				*ft_strdup(char *src)
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

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	struct s_stock_par	*struct_table;
	int					idx;

	idx = 0;
	struct_table = (struct s_stock_par*)malloc(sizeof(struct s_stock_par) * ac);
	while (idx < ac)
	{
		struct_table[idx].size_param = ft_strlen(av[idx]);
		struct_table[idx].str = av[idx];
		struct_table[idx].copy = ft_strdup(av[idx]);
		struct_table[idx].tab = ft_split_whitespaces(av[idx]);
		idx++;
	}
	struct_table[idx - 1].str = 0;
	return (struct_table);
}
