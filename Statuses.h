#pragma once
//TODO implement if you have a status such as burning, you are vulnerable to fire attacks
#include "MagicDec.h"

//bool Paralyzed() //TODO cannot move
//{
//	if (shock_time>0) {
//		return true;
//	}
//}

class Effect
{
	bool active;
	int num_of_turns;
};

struct DPS : Effect
{
	int damage;
};

 bool Burning() //TODO takes dps
{
	return true;
}

bool Frozen() //TODO cannot move and takes slight damage every round
{
	return true;
}

bool Poisoned() //TODO taking dps and accuracy is lowered
{
	return true;
}

bool Bleeding() //TODO dps, evasion is lowered
{
	return true;
}

