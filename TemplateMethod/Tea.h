#pragma once
#include "caffeinebeverage.h"
class Tea : public CaffeineBeverage
{
public:

	Tea(void)
	{
	}

	virtual ~Tea(void)
	{
	}

protected:

	virtual void brew()
	{
		std::cout<<"Steeping the tea\n";
	}

	virtual void addCondiments()
	{
		std::cout<<"Adding Lemon\n";
	}

};

