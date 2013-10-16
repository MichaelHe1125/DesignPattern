#pragma once

#include <vector>
#include "quackable.h"

class Flock : public Quackable
{
public:

	Flock(void) 
	{
		quackers = new std::vector<Quackable*>;
	}

	~Flock(void)
	{
		for (auto item : *quackers)
		{
			delete item;
		}

		delete quackers;
	}

	void add(Quackable *quacker)
	{
		quackers->push_back(quacker);
	}

	void quack()
	{
		for (auto item : *quackers)
		{
			item->quack();
		}
	}

	virtual void registerObserver( Observer* observer )
	{
		for (auto item : *quackers)
		{
			item->registerObserver(observer);
		}
	}

	virtual void notifyObservers() {  }
	
	virtual std::string toString()
	{
		return "Flock of Ducks";
	}
private:
	std::vector<Quackable*> *quackers;
};
