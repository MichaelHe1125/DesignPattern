#ifndef CHICAGOPIZZAINGREDIENTFACTORY_H
#define CHICAGOPIZZAINGREDIENTFACTORY_H

#include "pizzaingredientfactory.h"
class ChicagoPizzaIngredientFactory :
	public PizzaIngredientFactory
{
public:
	ChicagoPizzaIngredientFactory(void);
	virtual ~ChicagoPizzaIngredientFactory(void);

	virtual Dough* createDough();

	virtual Sauce* createSauce();

	virtual Cheese* createCheese();

	virtual std::vector<Veggies*>* createVeggies();

	virtual Pepperoni* createPepperoni();

	virtual Clams* createClam();

};

#endif // !CHICAGOPIZZAINGREDIENTFACTORY_H