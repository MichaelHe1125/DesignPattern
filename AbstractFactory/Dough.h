#ifndef DOUGH_H
#define DOUGH_H

#include <string>

class Dough
{
public:
	virtual std::string toString()=0;
	virtual ~Dough(void) {}
};

#endif // !DOUGH_H
