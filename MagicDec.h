#pragma once
#include "Statuses.h"
#include <vector>
#include <array>
#include <string>
using namespace std;
//TODO implement magic weapons
//TODO implement dps/statuses
//TODO implement defenses
//TODO implement spell damage
//TODO implement magic cost system

struct Fire
{
	int damage;
	int dps;
};

struct Ice
{
	int damage;
	bool frozen;
};

struct Thunder
{
	int damage;
	int shock_time;
	//bool Paralyzed();
};

 struct Spell //TODO implement magic system further
{
	int cost;
	string name;
};

struct HealSpell
{
	int cost;
	int healing;
};

struct Ward : Spell
{
	int defense;
};



struct DivineSpell : HealSpell
{

};



struct FireSpell : Spell, Fire
{

};

struct IceSpell : Spell, Ice
{

};

struct ThunderSpell : Spell, Thunder
{

};



	extern FireSpell burn;
	extern FireSpell inferno;
	extern IceSpell frost;
	extern IceSpell blizzard;
	extern ThunderSpell shock;
	extern ThunderSpell storm;
	extern Ward lesser;
	extern Ward greater;
	extern DivineSpell bless;
	extern DivineSpell greater_bless;


vector <FireSpell> FSpellList;
vector <IceSpell> ISpellList;
vector <ThunderSpell> TSpellList;

//vector<Spell> PlayerSpells[3] = { vector <FireSpell> PlayerFireSpells, vector <IceSpell> PlayerIceSpells, vector <ThunderSpell> PlayerThunderSpells };

vector<vector <Spell>> PlayerSpells;

//TODO implement system where the spells the player learns via level advacement are put into this vector 
 //this would mean that whenever the player goes to cast a spell, 
 //it would look up whatever spells are in the vector for the player to cast