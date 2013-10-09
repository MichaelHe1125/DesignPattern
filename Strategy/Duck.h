#pragma once
#include "FlyBehavior.h"
#include "QuackBehavior.h"
class Duck
{
public:
	Duck(void);	
	virtual ~Duck(void);

	virtual void display()=0;
	virtual void swim();
	void setFlyBehavior( FlyBehavior *flyBehavior);
	void setQuackBehavior( QuackBehavior *quackBehavior);
	void performFly();
	void performQuack();

protected:
	FlyBehavior *flyBehavior;
	QuackBehavior *quackBehavior;
};
