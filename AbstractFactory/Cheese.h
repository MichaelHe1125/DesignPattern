#ifndef CHEESE_H
#define CHEESE_H
#include <string>

class Cheese
{
public:
	virtual std::string toString()=0;
	virtual ~Cheese(void) {}
};

#endif // !CHEESE_H