#include "terminal_rpg.h"

// apply damage using positive value for heal negative for damage
void	damage_character(int damage, t_character *character)
{
	character->hp += damage;
	if (character->hp < 0)
		character->hp = 0;
	if (character->hp > character->maxhp)
		character->hp = character->maxhp;
}

//set character hp
void	set_hp(int hp, t_character *character)
{
	character->hp = hp;
}

//set character max hp
void	set_max_hp(int new_max_hp, t_character *character)
{
	character->maxhp = new_max_hp;
}

//add gold use positive to add negative to remove
void	add_gold(int gold, t_character *character)
{
	character->gold += gold;
	if (character->gold < 0)
	character->gold = 0;
}

//set the gold of the character
void	set_gold(int gold, t_character *character)
{
	character->gold = gold;
}