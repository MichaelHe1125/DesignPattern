#pragma once

#include <iostream>
#include "state.h"

class GumballMachine;

class SoldState : public State
{
public:
	SoldState(GumballMachine *gumballMachine);
	virtual ~SoldState(void);

	virtual void insertQuarter();

	virtual void ejectQuarter();

	virtual void turnCrank();

	virtual void dispense();

	virtual std::string toString();

private:
	GumballMachine *gumballMachine;
};

