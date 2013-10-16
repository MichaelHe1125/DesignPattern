#pragma once

#include "Quackable.h"
#include "Observable.h"

class QuackCounter : public Quackable
{
public:

	QuackCounter(Quackable *duck)
	{
		this->duck = duck;
		this->observable=new Observable(this);
	}

	~QuackCounter(void)
	{
		delete duck;
		delete observable;
	}

	void quack()
	{
		duck->quack();
		numberOfQuacks++;
	}

	static int getQuacks()
	{
		return numberOfQuacks;
	}

	virtual void registerObserver( Observer* observer )
	{
		duck->registerObserver(observer);
	}

	virtual void notifyObservers()
	{
		duck->notifyObservers();
	}

	virtual std::string toString()
	{
		return duck->toString();
	}

private:
	Quackable *duck;
	Observable *observable;
	static int numberOfQuacks;
};

__declspec(selectany) int QuackCounter::numberOfQuacks = 0;
