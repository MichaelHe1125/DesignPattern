#pragma once
#include "WildTurkey.h"
#include "MallardDuck.h"
class TurDuck : public WildTurkey,  public MallardDuck
{
public:

	TurDuck(void)
	{
	}

	virtual ~TurDuck(void)
	{
	}

	virtual void quack()
	{
		gobble();
	}

	virtual void fly()
	{
		for (int i=0; i<5; i++)
		{
			WildTurkey::fly();
		}
	}
};

