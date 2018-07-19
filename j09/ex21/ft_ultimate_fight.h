#ifndef __FT_ULTIMATE_FIGHT_H__
# define __FT_ULTIMATE_FIGHT_H__
#include <unistd.h>

typedef struct t_pers
{
    char *name;
    float life;
    int age;
    char *profession;
}   t_perso;

typedef struct t_kick
{
	int idx;
	int score;
	char *name;
}	t_kicks;

# define KICK "judo kick"
# define PUNCH "judo punch"
# define HEADBUTT "judo headbutt"

#endif
