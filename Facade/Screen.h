#pragma once
#include <string>
#include <iostream>
class Screen
{
public:

	Screen(const std::string &description)
	{
		this->description = new std::string(description);
	}

	virtual ~Screen(void)
	{
		delete description;
		description=nullptr;
	}

	std::string* toString()
	{
		return description;
	}

	void up()
	{
		std::cout<<*description+" going up\n";
	}

	void down()
	{
		std::cout<<*description+" going down\n";
	}

private:
	std::string *description;
};

