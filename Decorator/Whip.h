#pragma once
#include "condimentdecorator.h"
class Whip : public CondimentDecorator
{
public:

	Whip(Beverage *beverage)
	{
		this->beverage=beverage;
	}

	virtual ~Whip(void)
	{
		delete beverage;
	}

	virtual std::string getDescription()
	{
		return beverage->getDescription() + ", Whip";
	}

	virtual double cost() const
	{
		return .10 + beverage->cost();
	}

private:
	Beverage *beverage;
};

