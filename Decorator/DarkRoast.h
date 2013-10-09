#pragma once
#include "beverage.h"
class DarkRoast : public Beverage
{
public:

	DarkRoast(void)
	{
		description = "Dark Roast Coffee";
	}

	virtual ~DarkRoast(void)
	{
	}

	virtual double cost() const
	{
		return .99;
	}

};

