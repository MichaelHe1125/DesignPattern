#pragma once
class FlyBehavior
{
public:
	virtual ~FlyBehavior(void) { }
	virtual void fly()=0;
};
