#pragma once
#include <iostream>
class CaffeineBeverageWithHook
{
public:

	CaffeineBeverageWithHook(void)
	{
	}

	virtual ~CaffeineBeverageWithHook(void)
	{
	}

	void prepareRecipe()       // This is the template method.
	{
		boilWater();
		brew();
		pourInCup();
		if (customerWantsCondiments())
		{
			addCondiments();
		}
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

	virtual bool customerWantsCondiments()   //This is the hook.
	{
		return true;
	}
};

