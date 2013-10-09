#ifndef PEPPERONIPIZZA_H
#define PEPPERONIPIZZA_H

#include "pizza.h"
class PizzaIngredientFactory;

class PepperoniPizza : public Pizza
{
public:
	PepperoniPizza(PizzaIngredientFactory *ingredientFactory);
	virtual ~PepperoniPizza(void);

	virtual void prepare();

private:
	PizzaIngredientFactory *ingredientFactory;
};

#endif // PEPPERONIPIZZA_H