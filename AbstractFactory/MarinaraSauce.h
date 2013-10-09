#ifndef MARINARASAUCE_H
#define MARINARASAUCE_H

#include "sauce.h"
class MarinaraSauce : public Sauce
{
public:
	MarinaraSauce(void);
	virtual ~MarinaraSauce(void);

	virtual std::string toString();

};

#endif // !MARINARASAUCE_H
