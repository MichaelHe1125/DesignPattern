#pragma once
#include "QuackBehavior.h"
class Squeak : public QuackBehavior
{
public:
	Squeak(void);
	virtual ~Squeak(void);

	virtual void quack();
};
