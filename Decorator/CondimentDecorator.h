#pragma once
#include "beverage.h"
class CondimentDecorator : public Beverage
{
public:

	CondimentDecorator(void)
	{
	}

	virtual ~CondimentDecorator(void)
	{
	}

	virtual std::string getDescription()=0;

};

