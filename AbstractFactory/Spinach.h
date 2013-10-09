#ifndef SPINACH_H
#define SPINACH_H

#include "Veggies.h"
class Spinach : public Veggies
{
public:
	Spinach(void);
	virtual ~Spinach(void);

	virtual std::string toString();

};

#endif // !SPINACH_H