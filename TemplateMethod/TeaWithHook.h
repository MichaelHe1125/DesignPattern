#pragma once
#include <string>
#include <cctype>
#include <algorithm>
#include "caffeinebeveragewithhook.h"

class TeaWithHook : public CaffeineBeverageWithHook
{
public:

	TeaWithHook(void)
	{
	}

	virtual ~TeaWithHook(void)
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
		std::cout<<"Would you like lemon with your tea (y/n)? \n";
		std::cin>>answer;
		return answer;
	}
};

