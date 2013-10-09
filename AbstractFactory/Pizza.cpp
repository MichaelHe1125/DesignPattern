#include "Pizza.h"
#include "Cheese.h"
#include "Clams.h"
#include "Dough.h"
#include "Pepperoni.h"
#include "Sauce.h"
#include "Veggies.h"

Pizza::Pizza(void)
	: dough(nullptr), sauce(nullptr), veggies(nullptr),
	clam(nullptr), pepperoni(nullptr)
{
}


Pizza::~Pizza(void)
{
	if (dough)
	{
		delete dough;
		dough=nullptr;
	}
	if (sauce)
	{
		delete sauce;
		sauce=nullptr;
	}
	if (cheese)
	{
		delete cheese;
		cheese=nullptr;
	}
	if (veggies)
	{
		for (std::size_t i=0; i<veggies->size(); i++)
		{
			delete veggies->at(i);
		}
		delete veggies;
		veggies=nullptr;
	}
	if (clam)
	{
		delete clam;
		clam=nullptr;
	}
	if (pepperoni)
	{
		delete pepperoni;
		pepperoni=nullptr;
	}
}

std::string Pizza::toString()
{
	std::string result;
	result.append("---- " + name + " ----\n");
	if (dough)
	{
		result.append(dough->toString()+"\n");
	}
	if (sauce)
	{
		result.append(sauce->toString()+"\n");
	}
	if (cheese)
	{
		result.append(cheese->toString()+"\n");
	}
	if (veggies && !veggies->empty())
	{
		for (std::size_t i=0; i<veggies->size(); i++)
		{
			result.append(veggies->at(i)->toString());
			if (i<veggies->size()-1)
			{
				result.append(", ");
			}
		}
		result.append("\n");
	}
	if (clam)
	{
		result.append(clam->toString()+"\n");
	}
	if (pepperoni)
	{
		result.append(pepperoni->toString()+"\n");
	}
	return result;
}
