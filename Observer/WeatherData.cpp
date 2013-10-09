#include "WeatherData.h"
#include "Observer.h"
#include <algorithm>

WeatherData::WeatherData(void) 
{
	observers=new std::vector<Observer*>;
}

WeatherData::~WeatherData(void)
{	
	for (Observer* item : *observers)
	{
		delete item;
	}
	delete observers;
	observers=nullptr;
}

void WeatherData::registerObserver( Observer *o )
{
	observers->push_back(o);
}

void WeatherData::removeObserver( Observer *o )
{
	auto it=std::find(observers->begin(), observers->end(), o);
	if (it != observers->end())
	{		
		observers->erase(it);
	}
	delete o;
}

void WeatherData::notifyObservers()
{
	for (auto item : *observers)
	{
		item->update(temperature, humidity, pressure);
	}
}

void WeatherData::setMeasurements( float temperature, float humidity, float pressure )
{
	this->temperature=temperature;
	this->humidity=humidity;
	this->pressure=pressure;
	measurementsChanged();
}
