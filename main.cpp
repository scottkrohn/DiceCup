#include "dice.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "dicecup.h"

int main(int argc, char **argv)
{
	srand(time(0));

	// roll dice with 5
	DiceCup dc;
	std::vector<Dice> d(dc.getDiceValues());
	for(std::vector<Dice>::const_iterator i = d.begin(); i != d.end(); ++i)
	{
		std::cout << i->value() << "  ";
	}
	std::cout << std::endl;
	std::cout << "---------------------------" << std::endl;


	// remove one die and roll with 4
	dc.removeDie();
	dc.roll();
	d = dc.getDiceValues();
	for(std::vector<Dice>::const_iterator i = d.begin(); i != d.end(); ++i)
	{
		std::cout << i->value() << "  ";
	}
	std::cout << std::endl;
	std::cout << "---------------------------" << std::endl;

	// remove 1 die and roll with 3
	dc.removeDie();
	dc.roll();
	d = dc.getDiceValues();
	for(std::vector<Dice>::const_iterator i = d.begin(); i != d.end(); ++i)
	{
		std::cout << i->value() << "  ";
	}
	std::cout << std::endl;

		return 0;
}
