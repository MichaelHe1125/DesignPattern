#pragma once
#include <string>
#include <iostream>

class TheaterLights
{
public:

	TheaterLights(const std::string &description)
	{
		this->description = new std::string(description);
	}

	virtual ~TheaterLights(void)
	{
		delete description;
	}

	void on()
	{
		std::cout<<*description+" on\n";
	}

	void off()
	{
		std::cout<<*description+" off\n";
	}

	void dim(int level)
	{
		std::cout<<*description<<" dimming to "<< level<<"%\n";
	}

private:
	std::string *description;
};

