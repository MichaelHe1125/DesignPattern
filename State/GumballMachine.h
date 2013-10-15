#pragma once

#include <iostream>

#include "State.h"

class GumballMachine
{
public:
	GumballMachine(int numberGumballs);
	~GumballMachine(void);

	void insertQuarter() {
		state->insertQuarter();
	}

	void ejectQuarter() {
		state->ejectQuarter();
	}

	void turnCrank() {
		state->turnCrank();
		state->dispense();
	}

	void setState(State *state) {
		this->state = state;
	}

	void releaseBall() {
		std::cout<<"A gumball comes rolling out the slot...\n";
		if (count != 0) {
			count = count - 1;
		}
	}

	int getCount() const
	{
		return count;
	}

	void refill(int count) {
		this->count = count;
		state = noQuarterState;
	}

	State* getState() {
		return state;
	}

	State* getSoldOutState() {
		return soldOutState;
	}

	State* getNoQuarterState() {
		return noQuarterState;
	}

	State* getHasQuarterState() {
		return hasQuarterState;
	}

	State* getSoldState() {
		return soldState;
	}

	friend std::ostream& operator<<(std::ostream &out, const GumballMachine &machine);

private:
	State *soldOutState;
	State *noQuarterState;
	State *hasQuarterState;
	State *soldState;

	State *state;
	int count;
};
