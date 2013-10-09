#ifndef CHEESEPIZZA_H
#define CHEESEPIZZA_H

#include "pizza.h"
class PizzaIngredientFactory;

class CheesePizza : public Pizza
{
public:
	CheesePizza(PizzaIngredientFactory *ingredientFactory);
	virtual ~CheesePizza(void);

	virtual void prepare();

private:
	PizzaIngredientFactory *ingredientFactory;
};

#endif // CHEESEPIZZA_H