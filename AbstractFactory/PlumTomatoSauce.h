#ifndef PLUMTOMATOSAUCE_H
#define PLUMTOMATOSAUCE_H

#include "Sauce.h"
class PlumTomatoSauce : public Sauce
{
public:
	PlumTomatoSauce(void);
	virtual ~PlumTomatoSauce(void);

	virtual std::string toString();

};

#endif // !PLUMTOMATOSAUCE_H