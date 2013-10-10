#pragma once
#include <string>
#include <cctype>
#include <algorithm>
#include "caffeinebeveragewithhook.h"
class CoffeeWithHook : public CaffeineBeverageWithHook
{
public:

	CoffeeWithHook(void)
	{
	}

	virtual ~CoffeeWithHook(void)
	{
	}

protected:

	virtual void brew()
	{
		std::cout<<"Dripping Coffee through filter\n";
	}

	virtual void addCondiments()
	{
		std::cout<<"Adding Sugar and Milk\n";
	}

	virtual bool customerWantsCondiments()
	{
		std::string answer=getUserInput();
		std::transform(answer.begin(), answer.end(), answer.begin(), toupper);
		if (answer.find('Y') == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

private:
	std::string getUserInput()
	{
		std::string answer;
		std::cout<<"Would you like milk and sugar with your coffee (y/n)? \n";
		std::cin>>answer;
		return answer;
	}

};

