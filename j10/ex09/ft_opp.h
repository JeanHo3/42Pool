/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opp.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 11:08:36 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/23 11:50:58 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OPP_H
# define FT_OPP_H
t_opp g_opptab[] =
{
	{"p", &ft_add},
	{"m", &ft_sub},
	{"m", &ft_mul},
	{"d", &ft_div},
	{"mo", &ft_mod},
	{"", &ft_usage}
};
#endif
