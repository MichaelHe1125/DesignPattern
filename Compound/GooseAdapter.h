#pragma once

#include "Quackable.h"
#include "Observable.h"
#include "Goose.h"

class GooseAdapter : public Quackable
{
public:

	GooseAdapter(Goose *goose)
	{
		this->goose = goose;
		this->observable=new Observable(this);
	}

	~GooseAdapter(void)
	{
		delete goose;
		delete observable;
	}

	void quack()
	{
		goose->honk();
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
		return "Goose pretending to be a Duck";
	}

private:
	Goose *goose;
	Observable *observable;
};

