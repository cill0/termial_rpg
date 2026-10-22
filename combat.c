#include "terminal_rpg.h"

void	damage_character(int damage, t_character *character)
{
	character->hp += damage;
	if (character->hp < 0)
		character->hp = 0;
	if (character->hp > character->maxhp)
		character->hp = character->maxhp;
}