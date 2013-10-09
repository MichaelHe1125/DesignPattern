#ifndef THINCRUSTDOUGH_H
#define THINCRUSTDOUGH_H

#include "dough.h"
class ThinCrustDough : public Dough
{
public:
	ThinCrustDough(void);
	virtual ~ThinCrustDough(void);

	virtual std::string toString();

};

#endif // !THINCRUSTDOUGH_H