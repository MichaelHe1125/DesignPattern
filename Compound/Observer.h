#pragma once

class QuackObservable;

class Observer
{
public:

	Observer(void) { } 
	
	virtual ~Observer(void) { }

	virtual void update(QuackObservable *duck)=0;
};

