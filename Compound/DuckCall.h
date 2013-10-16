#pragma once

#include <iostream>
#include "Quackable.h"
#include "Observable.h"

class DuckCall : public Quackable
{
public:

	DuckCall(void)
	{
		observable=new Observable(this);
	}

	~DuckCall(void) 
	{
		delete observable;
	}
	
	void quack()
	{
		std::cout<<"Kwak\n";
		notifyObservers();
	}

	virtual void registerObserver( Observer* observer )
	{
		observable->registerObserver(observer);
	}

	virtual void notifyObservers()
	{
		observable->notifyObservers();
	}

	virtual std::string toString()
	{
		return "Duck Call";
	}
private:
	Observable *observable;
};

