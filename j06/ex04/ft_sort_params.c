/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 15:54:05 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/11 15:54:42 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_strrev(char **argv, int i, int j)
{
	char *memo;

	if (ft_strcmp(argv[j], argv[i]) < 0)
	{
		memo = argv[i];
		argv[i] = argv[j];
		argv[j] = memo;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 2;
	if (argc == 1)
		return (0);
	while (i < argc - 1)
	{
		while (j < argc)
		{
			ft_strrev(argv, i, j);
			j++;
		}
		i++;
		j = i + 1;
	}
	i = 0;
	while (i++ < argc - 1)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
}
