#pragma once
#include "beverage.h"
class Espresso : public Beverage
{
public:

	Espresso(void)
	{
		description = "Espresso";
	}

	virtual ~Espresso(void)
	{
	}

	virtual double cost() const
	{
		return 1.99;
	}

};

