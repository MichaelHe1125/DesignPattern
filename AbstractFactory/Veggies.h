#ifndef VEGGIES_H
#define VEGGIES_H

#include <string>

class Veggies
{
public:
	virtual std::string toString()=0;
	virtual ~Veggies(void) {}
};

#endif // !VEGGIES_H