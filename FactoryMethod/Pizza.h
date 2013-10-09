#pragma once
#include <string>
#include <vector>
#include <iostream>

class Pizza
{
public:
	Pizza(void);
	virtual ~Pizza(void);
	std::string getName() const
	{
		return name;
	}

	void prepare()
	{
		std::cout<<"Preparing " + name;
	}

	void bake()
	{
		std::cout<<"Baking " + name;
	}

	void cut()
	{
		std::cout<<"Cutting " + name;
	}

	void box()
	{
		std::cout<<"Boxing " + name;
	}

	std::string toString();
protected:
	std::string name;
	std::string dough;
	std::string sauce;
	std::vector<std::string> toppings;	
};

