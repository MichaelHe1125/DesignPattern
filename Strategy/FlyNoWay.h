#pragma once
#include "FlyBehavior.h"
class FlyNoWay : public FlyBehavior
{
public:
	FlyNoWay(void);
	virtual ~FlyNoWay(void);

	virtual void fly();
};
