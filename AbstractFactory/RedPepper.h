#ifndef REDPEPPER_H
#define REDPEPPER_H

#include "veggies.h"
class RedPepper : public Veggies
{
public:
	RedPepper(void);
	virtual ~RedPepper(void);

	virtual std::string toString();

};

#endif // !REDPEPPER_H