#ifndef THICKCRUSTDOUGH_H
#define THICKCRUSTDOUGH_H

#include "Dough.h"

class ThickCrustDough : public Dough
{
public:
	ThickCrustDough(void);
	virtual ~ThickCrustDough(void);

	virtual std::string toString();

};

#endif // !THICKCRUSTDOUGH_H