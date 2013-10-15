#pragma once

#include <string>

class State
{
public:

	State(void) { }

	virtual ~State(void) { }

	virtual void insertQuarter()=0;
	virtual void ejectQuarter()=0;
	virtual void turnCrank()=0;
	virtual void dispense()=0;
	virtual std::string toString()=0;
};

