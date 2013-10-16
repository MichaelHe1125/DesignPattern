#pragma once

#include <iostream>
#include "Observer.h"


class Quackologist : public Observer
{
public:

	Quackologist(void) { }

	~Quackologist(void) { }

	virtual void update( QuackObservable *duck )
	{
		std::cout<<"Quackologist: "<<duck->toString()<<" just quacked."<<std::endl;
	}
};
