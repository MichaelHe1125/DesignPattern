#include "DecoyDuck.h"
#include <iostream>
#include "FlyNoWay.h"
#include "MuteQuack.h"

DecoyDuck::DecoyDuck(void)
{
	setFlyBehavior(new FlyNoWay());
	setQuackBehavior(new MuteQuack());
}

DecoyDuck::~DecoyDuck(void) {  }

void DecoyDuck::display()
{
	std::cout<<"I'm a duck Decoy\n";
}