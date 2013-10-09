#pragma once
#include "FlyBehavior.h"
class FlyWithWings : public FlyBehavior
{
public:
	FlyWithWings(void);
	virtual ~FlyWithWings(void);

	virtual void fly();

};

