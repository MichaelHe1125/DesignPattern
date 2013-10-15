#pragma once
#include "state.h"
#include <iostream>

class GumballMachine;

class SoldOutState : public State
{
public:
	SoldOutState(GumballMachine *gumballMachine);
	virtual ~SoldOutState(void);

	virtual void insertQuarter();

	virtual void ejectQuarter();

	virtual void turnCrank();

	virtual void dispense();

	virtual std::string toString();

private:
	GumballMachine *gumballMachine;
};

