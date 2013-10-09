#pragma once
#include <iostream>
#include "duck.h"

class MallardDuck : public Duck
{
public:

	MallardDuck(void) { }

	virtual ~MallardDuck(void) { }

	virtual void quack()
	{
		std::cout<<"Quack\n";
	}

	virtual void fly()
	{
		std::cout<<"I'm flying\n";
	}

};

