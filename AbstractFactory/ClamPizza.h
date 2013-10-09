#ifndef CLAMPIZZA_H
#define CLAMPIZZA_H

#include "pizza.h"
class PizzaIngredientFactory;

class ClamPizza : public Pizza
{
public:
	ClamPizza(PizzaIngredientFactory *ingredientFactory);
	virtual ~ClamPizza(void);

	virtual void prepare();

private:
	PizzaIngredientFactory *ingredientFactory;
};

#endif // CLAMPIZZA_H