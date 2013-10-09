#pragma once
#include <vector>
#include "subject.h"
class Observer;
class WeatherData : public Subject
{
public:
	WeatherData(void);
	virtual ~WeatherData(void);

	virtual void registerObserver( Observer *o );

	virtual void removeObserver( Observer *o );

	virtual void notifyObservers();

	void measurementsChanged() 
	{
		notifyObservers();
	}

	void setMeasurements(float temperature, float humidity, float pressure);

	float getTemperature() 
	{
		return temperature;
	}

	float getHumidity() 
	{
		return humidity;
	}

	float getPressure() 
	{
		return pressure;
	}

private:
	std::vector<Observer*> *observers;
	float temperature;
	float humidity;
	float pressure;
};
