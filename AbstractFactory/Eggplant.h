#ifndef EGGPLANT_H
#define EGGPLANT_H

#include "Veggies.h"
class Eggplant : public Veggies
{
public:
	Eggplant(void);
	virtual ~Eggplant(void);

	virtual std::string toString();

};

#endif // !EGGPLANT_H