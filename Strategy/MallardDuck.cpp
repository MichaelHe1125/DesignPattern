#include "MallardDuck.h"
#include "FlyWithWings.h"
#include "Quack.h"
#include <iostream>

MallardDuck::MallardDuck(void)
{
	flyBehavior = new FlyWithWings();
	quackBehavior = new Quack();
}

MallardDuck::MallardDuck( const MallardDuck& mallrd )
{
	flyBehavior = new FlyWithWings();
	quackBehavior = new Quack();
}

MallardDuck::~MallardDuck(void) { } 

void MallardDuck::display()
{
	std::cout<<"I'm a real Mallard duck\n";
}

MallardDuck& MallardDuck::operator=( const MallardDuck& mallrd )
{
	if (this != &mallrd)
	{
		delete this->flyBehavior;
		delete this->quackBehavior;
		flyBehavior = new FlyWithWings();
		quackBehavior = new Quack();
	}
	return *this;
}
