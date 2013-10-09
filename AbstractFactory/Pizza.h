#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include <iostream>
#include <vector>
class Dough;
class Sauce;
class Veggies;
class Cheese;
class Pepperoni;
class Clams;

class Pizza
{
public:
	Pizza(void);
	virtual ~Pizza(void);

	virtual void prepare()=0;

	void bake()
	{
		std::cout<<"Bake for 25 minutes at 350\n";
	}

	void cut() {
		std::cout<<"Cutting the pizza into diagonal slices\n";
	}

	void box() {
		std::cout<<"Place pizza in official PizzaStore box\n";
	}

	void setName(const std::string& name)
	{
		this->name = name;
	}

	std::string getName() const
	{
		return name;
	}

	std::string toString();
	
protected:
	std::string name;
	Dough *dough;
	Sauce *sauce;
	std::vector<Veggies*> *veggies;
	Cheese *cheese;
	Pepperoni *pepperoni;
	Clams *clam;
};

#endif // !PIZZA_H