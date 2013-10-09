#pragma once
#include <string>
#include <iostream>

class Light
{
public:

	Light(const std::string &location)
	{
		this->location=location;
	}

	~Light(void) { }

	void on()
	{
		std::cout<<location+" light is on\n";
	}

	void off()
	{
		std::cout<<location+" light is off\n";
	}

private:
	std::string location;
};

