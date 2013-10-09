#ifndef NYPIZZAINGREDIENTFACTORY_H
#define NYPIZZAINGREDIENTFACTORY_H

#include "pizzaingredientfactory.h"
class NYPizzaIngredientFactory : public PizzaIngredientFactory
{
public:
	NYPizzaIngredientFactory(void);
	virtual ~NYPizzaIngredientFactory(void);

	virtual Dough* createDough();

	virtual Sauce* createSauce();

	virtual Cheese* createCheese();

	virtual std::vector<Veggies*>* createVeggies();

	virtual Pepperoni* createPepperoni();

	virtual Clams* createClam();

};

#endif // !NYPIZZAINGREDIENTFACTORY_H