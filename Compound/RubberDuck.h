#pragma once

#include <iostream>
#include "Quackable.h"
#include "Observable.h"

class RubberDuck : public Quackable
{
public:

	RubberDuck(void)
	{
		observable=new Observable(this);
	}

	~RubberDuck(void) 
	{
		delete observable;
	}

	void quack()
	{
		std::cout<<"Squeak\n";
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
		return "Rubber Duck";
	}

private:
	Observable *observable;
};

