#include "dicecup.h"
#include <stdexcept>

DiceCup::DiceCup(int dCount)
	:diceCount(dCount)
{
	if(dCount < 1)
		throw std::runtime_error("Unable to create a DiceCup object with < 1 dCount");
	fillCup();
}

std::vector<Dice> DiceCup::getDiceValues()
{
	std::vector<Dice> allDice;
	for(std::vector<std::pair<bool,Dice> >::const_iterator i = dice.begin();
		i != dice.end(); ++i)
	{
		allDice.push_back(i->second);
	}
	return allDice;
}

void DiceCup::roll()
{
	dice.clear();
	fillCup();
}


void DiceCup::removeDie()
{
	dice.pop_back();
	--diceCount;
}

void DiceCup::resetCup()
{
	dice.clear();
}

void DiceCup::fillCup()
{
	for(int i = 0; i != diceCount; ++i)
	{
		dice.push_back(std::pair<bool,Dice>(true, Dice()));
	}
}
