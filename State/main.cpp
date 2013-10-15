#include <iostream>
#include "GumballMachine.h"

int main(void)
{
	GumballMachine *gumballMachine = new GumballMachine(5);
	
	std::cout<<*gumballMachine<<std::endl;	

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	std::cout<<*gumballMachine<<std::endl;

	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();
	gumballMachine->insertQuarter();
	gumballMachine->turnCrank();

	std::cout<<*gumballMachine<<std::endl;

	delete gumballMachine;
	return 0;
}