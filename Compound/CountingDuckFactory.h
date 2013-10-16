#pragma once

#include "AbstractDuckFactory.h"
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "DuckCall.h"
#include "RubberDuck.h"
#include "QuackCounter.h"

class CountingDuckFactory : public AbstractDuckFactory
{
public:

	CountingDuckFactory(void) { }

	~CountingDuckFactory(void) { }

	virtual Quackable* createMallardDuck()
	{
		return new QuackCounter(new MallardDuck);
	}

	virtual Quackable* createRedheadDuck()
	{
		return new QuackCounter(new RedheadDuck);
	}

	virtual Quackable* createDuckCall()
	{
		return new QuackCounter(new DuckCall);
	}

	virtual Quackable* createRubberDuck()
	{
		return new QuackCounter(new RubberDuck);
	}
};
