#include <iostream>
#ifdef _DEBUG
#include "vld.h"
#endif // _DEBUG

#include "MallardDuck.h"
#include "ModelDuck.h"
#include "FlyRocketPowered.h"

using namespace std;

int main(void)
{
	Duck *mallard=new MallardDuck;
	mallard->performQuack();
	mallard->performFly();	
	delete mallard;

	Duck *model = new ModelDuck;
	model->performFly();
	model->setFlyBehavior(new FlyRocketPowered);
	model->performFly();
	delete model;

	//test copy constructor
	MallardDuck mallard1;
	mallard1.performFly();
	MallardDuck *mallard2 = new MallardDuck(mallard1);
	//mallard2->setFlyBehavior(new FlyRocketPowered());
	mallard2->performFly();
	delete mallard2;
	
	cin.get();
	return 0;
}