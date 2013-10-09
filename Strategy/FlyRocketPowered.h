#pragma once
#include "flybehavior.h"
class FlyRocketPowered : public FlyBehavior
{
public:
	FlyRocketPowered(void);
	virtual ~FlyRocketPowered(void);

	virtual void fly();

};

