#ifndef CLAMS_H
#define CLAMS_H

#include <string>

class Clams
{
public:
	virtual std::string toString()=0;
	virtual ~Clams(void) {}
};

#endif // !CLAMS_H
