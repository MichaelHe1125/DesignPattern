#pragma once
#include "beverage.h"
class Decaf : public Beverage
{
public:

	Decaf(void)
	{
		description = "Decaf Coffee";
	}

	virtual ~Decaf(void)
	{
	}

	virtual double cost() const
	{
		return 1.05;
	}

};

