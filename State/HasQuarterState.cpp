#include "HasQuarterState.h"
#include "GumballMachine.h"

HasQuarterState::HasQuarterState(GumballMachine *gumballMachine)
{
	this->gumballMachine = gumballMachine;
}


HasQuarterState::~HasQuarterState(void)
{
}

void HasQuarterState::insertQuarter()
{
	std::cout<<"You can't insert another quarter\n";
}

void HasQuarterState::ejectQuarter()
{
	std::cout<<"Quarter returned\n";
	gumballMachine->setState(gumballMachine->getNoQuarterState());
}

void HasQuarterState::turnCrank()
{
	std::cout<<"You turned...\n";
	gumballMachine->setState(gumballMachine->getSoldState());
}

void HasQuarterState::dispense()
{
	std::cout<<"No gumball dispensed\n";
}

std::string HasQuarterState::toString()
{
	return "waiting for turn of crank";
}
