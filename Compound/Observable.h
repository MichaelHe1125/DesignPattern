#pragma once

#include <vector>
#include "quackobservable.h"
#include "observer.h"

class Observable : public QuackObservable
{
public:

	Observable(QuackObservable *duck)
	{
		this->observers = new std::vector<Observer*>;
		this->duck = duck;
	}

	~Observable(void)
	{		
		delete observers;
	}

	virtual void registerObserver( Observer* observer )
	{
		observers->push_back(observer);
	}

	virtual void notifyObservers()
	{
		for (auto item : *observers)
		{
			item->update(duck);
		}		
	}

private:
	std::vector<Observer*> *observers;
	QuackObservable *duck;
};
