#pragma once
#include "Observer.h"
#include "DisplayElement.h"
class Subject;
class CurrentConditionsDisplay : public Observer, public DisplayElement
{
public:
	CurrentConditionsDisplay(Subject *weatherData);
	virtual ~CurrentConditionsDisplay(void);

	virtual void update( float temp, float humidity, float pressure );

	virtual void display();

private:
	float temperature;
	float humidity;
	Subject *weatherData;
};

