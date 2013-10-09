#ifndef MOZZARELLACHEESE_H
#define MOZZARELLACHEESE_H

#include "Cheese.h"
class MozzarellaCheese : public Cheese
{
public:
	MozzarellaCheese(void);
	virtual ~MozzarellaCheese(void);

	virtual std::string toString();

};

#endif // !MOZZARELLACHEESE_H