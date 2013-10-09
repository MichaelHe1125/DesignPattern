#ifndef PEPPERONI_H
#define PEPPERONI_H

#include <string>

class Pepperoni
{
public:
	virtual std::string toString()=0;
	virtual ~Pepperoni() {}
};

#endif // !PEPPERONI_H
