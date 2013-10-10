#pragma once
#include <iostream>
class CaffeineBeverage
{
public:

	CaffeineBeverage(void)
	{
	}

	virtual ~CaffeineBeverage(void)
	{
	}

	void prepareRecipe()       // This is the template method.
	{
		boilWater();
		brew();
		pourInCup();
		addCondiments();
	}

protected:

	virtual void brew()=0;

	virtual void addCondiments()=0;

	void boilWater()
	{
		std::cout<<"Boiling water\n";
	}

	void pourInCup()
	{
		std::cout<<"Pouring into cup\n";
	}
};

