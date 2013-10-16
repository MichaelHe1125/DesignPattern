#pragma once

#include <string>
class Observer;

class QuackObservable
{
public:

	QuackObservable(void) { }  
	
	virtual ~QuackObservable(void) { }

	virtual void registerObserver(Observer* observer)=0;
	virtual void notifyObservers()=0;

	virtual std::string toString() { return "Quack Observable"; }
};

