#ifndef SLICEDPEPPERONI_H
#define SLICEDPEPPERONI_H

#include "Pepperoni.h"
class SlicedPepperoni : public Pepperoni
{
public:
	SlicedPepperoni(void);
	virtual ~SlicedPepperoni(void);

	virtual std::string toString();

};

#endif // !SLICEDPEPPERONI_H