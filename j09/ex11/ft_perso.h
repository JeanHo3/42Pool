#ifndef __FT_PERSO_H__

#include <string.h>
# define __FT_PERSO_H__
# define SAVE_THE_WORLD "Super Hero"

typedef struct t_pers
{
	char *name;
	float life = 100.0;
	int age;
	char *profession;
}	t_perso;

#endif
