#pragma once
#include "condimentdecorator.h"
class Mocha : public CondimentDecorator
{
public:

	Mocha(Beverage *beverage)
	{
		this->beverage = beverage;
	}

	virtual ~Mocha(void)
	{
		delete beverage;
	}

	virtual std::string getDescription()
	{
		return beverage->getDescription()+", Mocha";
	}

	virtual double cost() const
	{
		return .20+beverage->cost();
	}

private:
	Beverage *beverage;
};

