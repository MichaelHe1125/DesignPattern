#include "GumballMachine.h"
#include "SoldOutState.h"
#include "NoQuarterState.h"
#include "HasQuarterState.h"
#include "SoldState.h"

GumballMachine::GumballMachine(int numberGumballs)
	: count(0)
{
	soldOutState = new SoldOutState(this);
	noQuarterState = new NoQuarterState(this);
	hasQuarterState = new HasQuarterState(this);
	soldState = new SoldState(this);

	state = soldOutState;
	this->count = numberGumballs;
	if (numberGumballs > 0) {
		state = noQuarterState;
	}
}

GumballMachine::~GumballMachine(void)
{
	delete soldOutState;
	delete noQuarterState;
	delete hasQuarterState;
	delete soldState;
}

std::ostream& operator<<(std::ostream &out, const GumballMachine &machine)
{
	out <<"\nMighty Gumball, Inc."
		<<"\nJava-enabled Standing Gumball Model #2004"
		<<"\nInventory: "<<machine.count<<" gumball";

	if (machine.count != 1)
	{
		out<<"s";
	}

	out<<"\nMachine is "<<machine.state->toString()<<"\n";

	return out;
}