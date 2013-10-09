#include "StatisticsDisplay.h"
#include "Subject.h"
#include <cstdio>

StatisticsDisplay::StatisticsDisplay(Subject *weatherData)
	: maxTemp(0.0f), minTemp(200), tempSum(0.0f), numReadings(0)
{
	this->weatherData=weatherData;
	this->weatherData->registerObserver(this);
}	 


StatisticsDisplay::~StatisticsDisplay(void)
{
}

void StatisticsDisplay::update( float temp, float humidity, float pressure )
{
	tempSum += temp;
	numReadings++;
	
	if (temp > maxTemp)
	{
		maxTemp=temp;
	}

	if (temp < minTemp)
	{
		minTemp=temp;
	}

	display();
}

void StatisticsDisplay::display()
{
	printf("Avg/Max/Min temperature = %5.1f/%5.1f/%5.1f\n", 
		(tempSum / numReadings), maxTemp, minTemp);
}
