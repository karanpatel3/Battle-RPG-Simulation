#pragma once
#include "MagicDec.h"
#include "Character.h"
#include <iostream>
using std::cout;

//TODO shock should have paralysis
//TODO frost should have frozen
//TODO burn should have burning

//TODO have a function that loads the spell that the user is inputting into the TRYCAST function
 
bool TryCast(Spell spell)
{
	if (player.mana < spell.cost)
	{
		return false;
	}
	else
	{
		return true;
	}
}



extern void SpellMenu(char m_choice)
{
	cout << "CHOOSE YOUR SPELL: \n";
	cout << "TYPE f for Fire Spells\n";
	cout << "TYPE i for Ice Spells\n";
	cout << "TYPE t for Thunder Spells\n";
	cin >> m_choice;

	switch (m_choice)
	{
	case 'f':
	{
		//TODO fire spell

		break;
	}

	case 'i':
	{
		//TODO ice spell
		break;
	}
	case 't':
	{
		//TODO thunder spell
		break;
	}

	}
}

extern void ChooseSpell(char m_choice)
{

}
//TODO have a function to lookup the spell that the user is trying to cast in the vector
//if it's there, return the spell the user is trying to use

//Spell lookup(Spell spell, vector<Spell> vecspell)
//{
//for(int i = 0; i<sizeof(vecspell); i++)
//{
//if(vecspell.at(i)==spell)
//{ 
//return spell;
//}
//else 
//{
//	cout << "Cannot cast ";
//  cout << spell.name;
//break;
//}
//}
