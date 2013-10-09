#ifndef VEGGIEPIZZA_H
#define VEGGIEPIZZA_H

#include "pizza.h"
class PizzaIngredientFactory;

class VeggiePizza : public Pizza
{
public:
	VeggiePizza(PizzaIngredientFactory *ingredientFactory);
	virtual ~VeggiePizza(void);

	virtual void prepare();

private:
	PizzaIngredientFactory *ingredientFactory;
};

#endif // VEGGIEPIZZA_H