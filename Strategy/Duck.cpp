#include "Duck.h"
#include <iostream>

Duck::Duck(void)
	: flyBehavior(nullptr), quackBehavior(nullptr)
{
}

Duck::~Duck(void)
{
	delete flyBehavior;
	flyBehavior=nullptr;
	delete quackBehavior;
	quackBehavior=nullptr;
}

void Duck::swim()
{
	std::cout<<"All ducks float, even decoys!\n";
}

void Duck::setFlyBehavior( FlyBehavior *flyBehavior )
{
	if (this->flyBehavior != flyBehavior)
	{
		delete this->flyBehavior;
		this->flyBehavior = flyBehavior;
	}
}

void Duck::setQuackBehavior( QuackBehavior *quackBehavior )
{
	if (this->quackBehavior != quackBehavior)
	{
		delete this->quackBehavior;
		this->quackBehavior = quackBehavior;
	}
}

void Duck::performFly()
{
	flyBehavior->fly();
}

void Duck::performQuack()
{
	quackBehavior->quack();
}