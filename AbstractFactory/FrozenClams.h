#ifndef FROZENCLAMS_H
#define FROZENCLAMS_H

#include "Clams.h"
class FrozenClams : public Clams
{
public:
	FrozenClams(void);
	virtual ~FrozenClams(void);

	virtual std::string toString();

};

#endif // !FROZENCLAMS_H