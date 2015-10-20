#ifndef DICECUP_H
#define DICECUP_H
#include <vector>
#include "dice.h"
#include <utility>

class DiceCup
{
public:
	DiceCup(int dCount = 5);	// Default is a normal cup of 5 dice

	// Modifying functions
	void roll();
	void removeDie();
	void resetCup();

	// Access fuctions
	std::vector<Dice> getDiceValues();
	int activeDiceCount() const {return dice.size();}
private:
	std::vector<std::pair<bool, Dice> > dice;
	int diceCount;

	void fillCup();
};

#endif
