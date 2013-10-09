#include "WeatherData.h"
#include "CurrentConditionsDisplay.h"
#include "ForecastDisplay.h"
#include "StatisticsDisplay.h"

int main(void)
{
	WeatherData *weatherData=new WeatherData();
	Observer *currentDisplay=new CurrentConditionsDisplay(weatherData);
	Observer *statisticDisplay=new StatisticsDisplay(weatherData);
	Observer *forecastDisplay=new ForecastDisplay(weatherData);
	weatherData->setMeasurements(80, 65, 30.4f);
	weatherData->setMeasurements(82, 70, 29.2f);
	weatherData->removeObserver(currentDisplay);
	weatherData->setMeasurements(78, 90, 29.2f);
	delete 	weatherData;
	return 0;
}