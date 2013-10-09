#ifndef NYPIZZASTORE_H
#define NYPIZZASTORE_H

#include "pizzastore.h"
class NYPizzaStore : public PizzaStore
{
public:
	NYPizzaStore(void);
	virtual ~NYPizzaStore(void);

	virtual Pizza* createPizza( std::string item );

};

#endif // !NYPIZZASTORE_H