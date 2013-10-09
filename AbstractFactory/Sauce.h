#ifndef SAUCE_H
#define SAUCE_H

#include <string>

class Sauce
{
public:
	virtual std::string toString()=0;
	virtual ~Sauce(void) {}
};

#endif // !SAUCE_H