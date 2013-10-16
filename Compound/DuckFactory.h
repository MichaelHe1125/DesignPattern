#pragma once

#include "AbstractDuckFactory.h"
#include "MallardDuck.h"
#include "RedheadDuck.h"
#include "DuckCall.h"
#include "RubberDuck.h"

class DuckFactory : public AbstractDuckFactory
{
public:

	DuckFactory(void) { }

	~DuckFactory(void) { }

	virtual Quackable* createMallardDuck()
	{
		return new MallardDuck;
	}

	virtual Quackable* createRedheadDuck()
	{
		return new RedheadDuck;
	}

	virtual Quackable* createDuckCall()
	{
		return new DuckCall;
	}

	virtual Quackable* createRubberDuck()
	{
		return new RubberDuck;
	}
};
