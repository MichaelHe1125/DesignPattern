#include "NoQuarterState.h"
#include "GumballMachine.h"

NoQuarterState::NoQuarterState(GumballMachine *gumballMachine)
{
	this->gumballMachine = gumballMachine;
}


NoQuarterState::~NoQuarterState(void)
{
}

void NoQuarterState::insertQuarter()
{
	std::cout<<"You inserted a quarter\n";
	gumballMachine->setState(gumballMachine->getHasQuarterState());
}

void NoQuarterState::ejectQuarter()
{
	std::cout<<"You haven't inserted a quarter\n";
}

void NoQuarterState::turnCrank()
{
	std::cout<<"You turned, but there's no quarter\n";
}

void NoQuarterState::dispense()
{
	std::cout<<"You need to pay first\n";
}

std::string NoQuarterState::toString()
{
	return "waiting for quarter";
}
