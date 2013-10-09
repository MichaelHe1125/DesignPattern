#include <iostream>
#include <vld.h>
#include "MallardDuck.h"
#include "WildTurkey.h"
#include "TurkeyAdapter.h"
#include "TurDuck.h"

void testDuck(Duck* duck)
{
	duck->quack();
	duck->fly();
}

void testMallardDuck(MallardDuck* mallardDuck)
{
	mallardDuck->quack();
	mallardDuck->fly();
}

int main(void)
{
	MallardDuck *duck =new MallardDuck;
	WildTurkey *turkey = new WildTurkey;
	Duck *turkeyAdapter=new TurkeyAdapter(turkey);
	MallardDuck *turDuck = new TurDuck;

	std::cout<<"The turkey says...\n";
	turkey->gobble();
	turkey->fly();

	std::cout<<"\nThe Duck says...\n";
	testDuck(duck);

	std::cout<<"\nThe TurkeyAdapter says...\n";
	testDuck(turkeyAdapter);

	std::cout<<"\nThe TurDuck says...\n";
	testMallardDuck(turDuck);

	delete turDuck;
	delete turkeyAdapter;
	delete duck;

	std::cin.get();
	return 0;
}