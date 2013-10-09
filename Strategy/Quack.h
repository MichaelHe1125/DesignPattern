#pragma once
#include "QuackBehavior.h"
class Quack : public QuackBehavior
{
public:
	Quack(void);
	virtual ~Quack(void);

	virtual void quack();
};
