#pragma once
#include "Character.h"
#include "EnemySys.h"

int e_damage; //TODO FIND A BETTER PLACE FOR THIS VARIABLE

void Playeraction(char p_choice)
{
	switch (p_choice)
	{
	case 'a':
	{
		std::cout << "\nYou hit the enemy with physical strength!!\n";
		e_damage = player.strength;
		enemy.health -= e_damage;//health is subtracted from enemy 
		std::cout << "You hit the enemy with " << e_damage << std::endl; //percentage of health subtracted from enemy is derived from player level combined with form of attacked

		break;
	}

	case 'b':
	{
		std::cout << "\nYou blocked!\n";//prevent much damage from enemy attack
		player.defense += 10;//percentage of health subtracted from player is derived from player level combined type of armor
		break;
	}

	case 'm':
	{
		if(player.mana==0)
		{
			std::cout << "YOU ARE OUT OF MANA!!!";
			break;
		}
		/*if(CastSpell(spell)==true) 
		
		TODO make sure this can check the mana cost of the spell the user wants to cast, 
		and be able to cast or not cast based on that
		*/
			//attack enemy with special attack
		std::cout << "\nYou attacked with magic!!" << std::endl;//TODO implement percentage of attack is derived from player level, spell, armor, mana level 
		player.mana -= 10;//decrease mana level of player after magic attack
		e_damage = 20;
		enemy.health -= e_damage;//add a special effect against the enemy like paralysis, poison, burn, frozen, etc.
		std::cout << "You hit the enemy with " << e_damage << " damage!" << std::endl; //prevent player from using magic if they have no mana
		break;
	}
	}
}

void Playerchoices()
{
	char choice;
	std::cout << "YOUR TURN\n" << std::endl;
	std::cout << "Press a for attack" << std::endl;
	std::cout << "Press b for block" << std::endl;
	std::cout << "Press m for magic" << std::endl;
	std::cin >> choice;
	Playeraction(choice);
}

void Round() //TODO implement status checking system
//TODO if paralyzed - can't act this turn
//TODO if burning - dps this round
//TODO if frozen - takes dps and can't act this turn
{
	do
	{
		std::cout << "Player health: " << player.health << " ";
		std::cout<< "Player mana: " << player.mana << std::endl;
		std::cout << "Enemy health: " << enemy.health << std::endl;
		Playerchoices();
		Enemyaction();
		while (player.mana <= player.manacap)
		{
			if (player.mana == player.manacap)
				break;
			player.mana += 5;
		}
		//TODO implement enemy round mana increase

	} while ((player.health > 0) && (enemy.health > 0));
}

bool Result()
{
	if (player.health <= 0)
	{
		return false;
	}
	else
	{
		return true;
	}
	}

void Battle()
{
	//TODO Check statuses of both player and enemy, if paralyzed don't let one move, if dps then damage after action
	Round();
	if (Result()==false)
	{
		std::cout << "YOU LOSE! TRY AGAIN!";
	}
	else
	{
		std::cout << "YOU WON!";
	}
}
