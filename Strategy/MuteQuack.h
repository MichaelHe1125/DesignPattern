#pragma once
#include "QuackBehavior.h"
class MuteQuack : public QuackBehavior
{
public:
	MuteQuack(void);
	virtual ~MuteQuack(void);

	virtual void quack();
};
