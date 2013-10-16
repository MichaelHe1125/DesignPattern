#pragma once

class Quackable;

class AbstractDuckFactory
{
public:

	virtual ~AbstractDuckFactory(void) { }

	virtual Quackable* createMallardDuck()=0;
	virtual Quackable* createRedheadDuck()=0;
	virtual Quackable* createDuckCall()=0;
	virtual Quackable* createRubberDuck()=0;

};

