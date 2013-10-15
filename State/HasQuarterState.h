#pragma once

#include <iostream>
#include "state.h"

class GumballMachine;

class HasQuarterState : public State
{
public:
	HasQuarterState(GumballMachine *gumballMachine);
	virtual ~HasQuarterState(void);

	virtual void insertQuarter();

	virtual void ejectQuarter();

	virtual void turnCrank();

	virtual void dispense();
	
	virtual std::string toString();

private:
	GumballMachine *gumballMachine;
};

