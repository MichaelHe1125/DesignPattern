#ifndef PIZZASTORE_H
#define PIZZASTORE_H

#include <string>
class Pizza;

class PizzaStore
{
public:
	PizzaStore(void);
	virtual ~PizzaStore(void);
	Pizza* orderPizza(std::string type);
protected:
	virtual Pizza* createPizza(std::string item)=0;

};

#endif // !PIZZASTORE_H