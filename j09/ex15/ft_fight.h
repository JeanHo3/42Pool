/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhourman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 16:41:02 by jhourman          #+#    #+#             */
/*   Updated: 2018/07/13 16:42:50 by jhourman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef __FT_FIGHT_H__
# define __FT_FIGHT_H__
# include <unistd.h>
# include <stdio.h>

typedef struct	t_pers
{
    char		*name;
    float		life;
    int			age;
    char		*profession;
}   			t_perso;

# define KICK "judo kick"
# define PUNCH "judo punch"
# define HEADBUTT "judo headbutt"

#endif
