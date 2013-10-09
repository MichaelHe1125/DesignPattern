#pragma once
#include "beverage.h"
class HouseBlend : public Beverage
{
public:

	HouseBlend(void)
	{
		description="House Blend Coffee";
	}

	virtual ~HouseBlend(void)
	{
	}

	virtual double cost() const
	{
		return .89;
	}

};

