#pragma once
#include "Observer.h"
#include "DisplayElement.h"
class Subject;
class StatisticsDisplay : public Observer, public DisplayElement
{
public:
	StatisticsDisplay(Subject *weatherData);
	virtual ~StatisticsDisplay(void);

	virtual void update( float temp, float humidity, float pressure );

	virtual void display();

private:
	float maxTemp;
	float minTemp;
	float tempSum;
	int numReadings;
	Subject *weatherData;
};