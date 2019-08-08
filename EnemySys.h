#pragma once
//TODO implement enemy magic system
#include<cstdlib>

int damage; //TODO FIND A BETTER PLACE FOR THIS VARIABLE
int additional_damage;

void Enemyphysattack()
{
	additional_damage = rand() % (enemy.strength/2); //TODO improve this
	damage = (10 * enemy.strength) / (enemy.strength + player.defense);
	damage += additional_damage;
	player.health -= damage;
}
void Enemyaction()
{
	Enemyphysattack();
	std::cout << "\nEnemy attacked you!\n" << "You took " << damage << " damage\n" << std::endl;
}

void Enemymagic()
{
	
}
struct MagicEnemy
{
	Enemy info;
	int magic_attack;
	int magic_defense;

};
