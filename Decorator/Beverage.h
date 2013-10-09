#pragma once
#include <string>
class Beverage
{
public:

	Beverage(void) : description("Unknown Beverage") { }

	virtual ~Beverage(void) { }

	virtual double cost() const =0 ;

	virtual std::string getDescription()
	{
		return description;
	}

protected:

	std::string description;
};

