#pragma once
#include <random>
#include "Turkey.h"
#include "Duck.h"

class DuckAdapter : public Turkey
{
public:

	DuckAdapter(Duck *duck)
	{
		this->duck = duck;
		rd = new std::random_device();
	}

	virtual ~DuckAdapter(void)
	{
		delete rd;
	}

	virtual void gobble()
	{
		duck->quack();
	}

	virtual void fly()
	{
		if ( rd->operator()%5 == 0 )
		{
			duck->fly();
		}
	}

private:
	Duck *duck;
	std::random_device *rd;
};

