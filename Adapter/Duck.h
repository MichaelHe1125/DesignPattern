#pragma once
class Duck
{
public:

	Duck(void) { }

	virtual ~Duck(void) { }

	virtual void quack()=0;
	virtual void fly()=0;
};

