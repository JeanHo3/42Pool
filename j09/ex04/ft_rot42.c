/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 11:05:30 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/13 15:53:31 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//a devient q
//a + 26 = a
//a + 26 + 16
//a = rot 2

#include <stdio.h>

char    *ft_strupcase(char *str)
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

char *ft_rot42(char *str)
{
	int i;
	char v;
	char *st;
	char k;
	
	i = 0;
	st = str;
	//printf("%s", str);
	ft_strupcase(str);
	while(st[i] != '\0')
	{
		v = st[i] + 16;
		printf("%c", v);
		if (v > 'Z')
		{
//			str[i] = 65 + ((int)v - 90);
			k = v - 25;
			printf("%c", st[i]);
			st[i] = k;
		}
//		else
//			str[i] = v;
		
		i++;
	}
	return (0);
}

int main (void)
{
	char *tab = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	printf("\n%s",ft_rot42(tab));
	return (0);
}
