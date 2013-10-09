#pragma once
#include "Duck.h"
#include "Turkey.h"

class TurkeyAdapter : public Duck
{
public:

	TurkeyAdapter(Turkey *turke)
	{
		this->turkey = turke;
	}

	virtual ~TurkeyAdapter(void)
	{
		if (turkey)
		{
			delete turkey;
			turkey=nullptr;
		}
	}

	virtual void quack()
	{
		turkey->gobble();
	}

	virtual void fly()
	{
		for (int i = 0; i < 5; i++)
		{
			turkey->fly();
		}
	}

private:
	Turkey *turkey;
};

