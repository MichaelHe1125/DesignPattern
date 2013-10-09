#ifndef REGGIANOCHEESE_H
#define REGGIANOCHEESE_H

#include "cheese.h"

class ReggianoCheese : public Cheese
{
public:
	ReggianoCheese(void);
	virtual ~ReggianoCheese(void);

	virtual std::string toString();

};

#endif // !REGGIANOCHEESE_H