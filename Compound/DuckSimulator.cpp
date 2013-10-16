#include "DuckSimulator.h"
#include "Quackable.h"
#include "AbstractDuckFactory.h"
#include "GooseAdapter.h"
#include "QuackCounter.h"
#include "Flock.h"
#include "Quackologist.h"

DuckSimulator::DuckSimulator(void)
{
}

DuckSimulator::~DuckSimulator(void)
{
}

void DuckSimulator::simulate( AbstractDuckFactory *duckFactory )
{
	Flock *flockOfDucks = new Flock();
	Quackable *redheadDuck = duckFactory->createRedheadDuck();
	Quackable *duckCall = duckFactory->createDuckCall();
	Quackable *rubberDuck = duckFactory->createRubberDuck();
	Quackable *gooseDuck = new GooseAdapter(new Goose());	
	flockOfDucks->add(redheadDuck);
	flockOfDucks->add(duckCall);
	flockOfDucks->add(rubberDuck);
	flockOfDucks->add(gooseDuck);

	Flock *flockOfMallards = new Flock();
	Quackable *mallard1 = duckFactory->createMallardDuck();
	Quackable *mallard2 = duckFactory->createMallardDuck();
	Quackable *mallard3 = duckFactory->createMallardDuck();
	Quackable *mallard4 = duckFactory->createMallardDuck();
	flockOfMallards->add(mallard1);
	flockOfMallards->add(mallard2);
	flockOfMallards->add(mallard3);
	flockOfMallards->add(mallard4);

	flockOfDucks->add(flockOfMallards);

	std::cout<<"\nDuck Simulator:  With Observer\n";

	Quackologist *quackologist = new Quackologist();
	flockOfDucks->registerObserver(quackologist);

	simulate(flockOfDucks);

	//std::cout<<"\nDuck Simulator: Mallard Flock Simulation\n";
	//simulate(flockOfMallards);

	std::cout<<"The ducks quacked "<<QuackCounter::getQuacks()<<" times\n";

	//release memory
	delete flockOfDucks;
	delete quackologist;
}

void DuckSimulator::simulate( Quackable *duck )
{
	duck->quack();
}