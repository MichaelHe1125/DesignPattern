#pragma once
#include "caffeinebeverage.h"
class Coffee : public CaffeineBeverage
{
public:

	Coffee(void)
	{
	}

	virtual ~Coffee(void)
	{
	}

protected:

	virtual void brew()
	{
		std::cout<<"Dripping Coffee through filter\n";
	}

	virtual void addCondiments()
	{
		std::cout<<"Adding Sugar and Milk\n";
	}

};

