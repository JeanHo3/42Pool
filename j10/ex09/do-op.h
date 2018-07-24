/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 15:41:48 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/20 13:38:47 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H

# define DO_OP_H

typedef struct	s_opp
{
	char		*opp;
	int			(*f)(int, int);
}				t_opp;

int		ft_add(int nb1, int nb2);

int		ft_sub(int nb1,int nb2);

int		ft_div(int nb1,int nb2);

int		ft_mod(int nb1,int nb2);

int		ft_mul(int nb1,int nb2);

int		ft_usage(int nb1, int nb2);

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_putnbr(int nbr);

#endif
