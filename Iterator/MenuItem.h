#pragma once
#include <string>
class MenuItem
{
public:
	MenuItem(
		const std::string &name,
		const std::string &description,
		bool vegetarian,
		double price);
	~MenuItem(void);
	
	std::string* getName() const
	{
		return name;
	}

	std::string* getDescription() const
	{
		return description;
	}

	double getPrice() const
	{
		return price;
	}

	bool isVegetarian() const
	{
		return vegetarian;
	}
private:
	std::string *name;
	std::string *description;
	bool vegetarian;
	double price;
};

