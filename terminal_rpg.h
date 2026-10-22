#include <stdio.h>
#include <unistd.h>

typedef struct s_character
{
	char	*name;
	int		gold;
	int		hp;
	int		maxhp;
	int		potion;
	int		attack;
}	t_character;