#pragma once
#include <iostream>
#include "turkey.h"
class WildTurkey : public Turkey
{
public:

	WildTurkey(void) { }
	
	virtual ~WildTurkey(void) { }

	virtual void gobble()
	{
		std::cout<<"Gobble gobble\n";
	}

	virtual void fly()
	{
		std::cout<<"I'm flying a short distance\n";
	}

};

