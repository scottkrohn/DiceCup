#ifndef DICE_H
#define DICE_H

class Dice
{
public:
	Dice(int s = 6);	// Defaults to six sided dice

	// modifying functions
	void roll();

	// access functions
	int value() const {return val;}
private:
	int sides;
	int val;
};
#endif
