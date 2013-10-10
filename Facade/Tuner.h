#pragma once
#include <string>
#include <iostream>

class Amplifier;

class Tuner
{
public:

	Tuner(const std::string &description, Amplifier *amplifier)
	{
		this->amplifier = amplifier;
		this->description = new std::string(description);
	}

	virtual ~Tuner(void)
	{
		delete description;
	}

	std::string* toString()
	{
		return description;
	}

private:
	std::string   *description;
	Amplifier     *amplifier;
	double         frequency;
};

