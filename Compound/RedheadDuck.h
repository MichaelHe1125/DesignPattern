#pragma once

#include <iostream>
#include "quackable.h"
#include "Observable.h"

class RedheadDuck : public Quackable
{
public:

	RedheadDuck(void) 
	{
		observable=new Observable(this);
	}

	~RedheadDuck(void) 
	{
		delete observable;
	}

	void quack()
	{
		std::cout<<"Quack\n";
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
		return "Redhead Duck";
	}

private:
	Observable *observable;
};

