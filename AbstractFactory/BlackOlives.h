#ifndef BLACKOLIVES_H
#define BLACKOLIVES_H

#include "Veggies.h"
class BlackOlives : public Veggies
{
public:
	BlackOlives(void);
	virtual ~BlackOlives(void);

	virtual std::string toString();

};

#endif // !BLACKOLIVES_H