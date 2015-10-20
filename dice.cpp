#include "dice.h"
#include <stdexcept>
#include <cstdlib>

Dice::Dice(int s)
	:sides(s), val(rand() % sides + 1)
{
	if(sides < 1)
		throw std::runtime_error("Invalid number of sides for a Dice object");
}

void Dice::roll()
{
	val = rand() % sides +1;
}
