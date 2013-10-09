#ifndef CHICAGOPIZZASTORE_H
#define CHICAGOPIZZASTORE_H

#include "pizzastore.h"
class ChicagoPizzaStore : public PizzaStore
{
public:
	ChicagoPizzaStore(void);
	virtual ~ChicagoPizzaStore(void);

	virtual Pizza* createPizza( std::string item );

};

#endif // CHICAGOPIZZASTORE_H