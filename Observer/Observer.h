#pragma once
class Observer
{
public:
	Observer(void) { }
	virtual ~Observer(void) { }

	virtual void update(float temp, float humidity, float pressure)=0;
};

