#include "ForecastDisplay.h"
#include "Subject.h"
#include <iostream>

ForecastDisplay::ForecastDisplay(Subject *weatherData)
	: currentPressure(29.92f), weatherData(weatherData)
{
	this->weatherData->registerObserver(this);
}


ForecastDisplay::~ForecastDisplay(void)
{

}

void ForecastDisplay::update( float temp, float humidity, float pressure )
{
	lastPressure = currentPressure;
	currentPressure = pressure;
	display();
}

void ForecastDisplay::display()
{
	std::cout<<"Forecast: ";
	if (currentPressure > lastPressure)
	{
		std::cout<<"Improving weather on the way!\n";
	} 
	else if(currentPressure == lastPressure)
	{
		std::cout<<"More of the same\n";
	}
	else
	{
		std::cout<<"Watch out for cooler, rainy weather\n";
	}
}
