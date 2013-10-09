#pragma once
#include "Observer.h"
#include "DisplayElement.h"
class Subject;
class ForecastDisplay : public Observer, public DisplayElement
{
public:
	ForecastDisplay(Subject *weatherData);
	virtual ~ForecastDisplay(void);

	virtual void update( float temp, float humidity, float pressure );

	virtual void display();

private:
	float currentPressure;
	float lastPressure;
	Subject *weatherData;
};
