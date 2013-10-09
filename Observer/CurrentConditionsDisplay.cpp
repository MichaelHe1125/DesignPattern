#include "CurrentConditionsDisplay.h"
#include "Subject.h"
#include <cstdio>
#include <string>
CurrentConditionsDisplay::CurrentConditionsDisplay(Subject *weatherData)
{
	this->weatherData = weatherData;
	this->weatherData->registerObserver(this);
}


CurrentConditionsDisplay::~CurrentConditionsDisplay(void)
{
	
}

void CurrentConditionsDisplay::update( float temp, float humidity, float pressure )
{
	this->temperature = temp;
	this->humidity = humidity;
	display();
}

void CurrentConditionsDisplay::display()
{
	printf("Current conditions: %5.1fF degrees and %5.1f%% humidity\n",
		temperature, humidity);
}
