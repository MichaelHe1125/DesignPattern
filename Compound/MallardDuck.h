#pragma once

#include <iostream>
#include "Quackable.h"
#include "Observable.h"

class MallardDuck : public Quackable
{
public:

	MallardDuck(void)
	{
		observable=new Observable(this);
	}

	~MallardDuck(void)
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
		return "Mallard Duck";
	}

private:
	Observable *observable;
};

