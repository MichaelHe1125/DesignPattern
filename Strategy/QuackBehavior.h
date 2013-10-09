#pragma once
class QuackBehavior
{
public:
	virtual ~QuackBehavior(void) { }
	virtual void quack()=0;
};
