#include "ModelDuck.h"
#include <iostream>
#include "FlyNoWay.h"
#include "Quack.h"

ModelDuck::ModelDuck(void)
{
	flyBehavior=new FlyNoWay();
	quackBehavior=new Quack();
}

ModelDuck::~ModelDuck(void) { }

void ModelDuck::display()
{
	std::cout<<"I'm a model duck\n";
}