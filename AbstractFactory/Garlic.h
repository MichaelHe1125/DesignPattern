#ifndef GARLIC_H
#define GARLIC_H

#include "veggies.h"
class Garlic : public Veggies
{
public:
	Garlic(void);
	virtual ~Garlic(void);

	virtual std::string toString();

};

#endif // !GARLIC_H