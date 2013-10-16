#pragma once

#include "QuackObservable.h"

class Quackable : public QuackObservable
{
public:	

	virtual ~Quackable(void) { }

	virtual void quack()=0;
};

