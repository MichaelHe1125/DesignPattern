#pragma once
#include "Duck.h"
class MallardDuck : public Duck
{
public:
	MallardDuck(void);
	MallardDuck(const MallardDuck& mallrd);
	MallardDuck& operator=(const MallardDuck& mallrd);
	virtual ~MallardDuck(void);

	virtual void display();

};

