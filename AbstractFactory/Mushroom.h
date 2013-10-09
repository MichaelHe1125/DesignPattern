#ifndef MUSHROOM_H
#define MUSHROOM_H

#include "veggies.h"
class Mushroom : public Veggies
{
public:
	Mushroom(void);
	virtual ~Mushroom(void);

	virtual std::string toString();

};

#endif // !MUSHROOM_H