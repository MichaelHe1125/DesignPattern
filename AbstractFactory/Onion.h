#ifndef ONION_H
#define ONION_H

#include "veggies.h"
class Onion : public Veggies
{
public:
	Onion(void);
	virtual ~Onion(void);

	virtual std::string toString();

};

#endif // !ONION_H