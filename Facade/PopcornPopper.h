#pragma once
#include <string>
#include <iostream>
class PopcornPopper
{
public:

	PopcornPopper(const std::string &description)
	{
		this->description = new std::string(description);
	}

	virtual ~PopcornPopper(void)
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

	void pop()
	{
		std::cout<<*description+" popping popcorn!\n";
	}

	std::string* toString()
	{
		return description;
	}

private:
	std::string *description;
};

