#include <cstdio>
#include <vld.h>
#include "DarkRoast.h"
#include "Espresso.h"
#include "Mocha.h"
#include "Whip.h"
#include "HouseBlend.h"
#include "Soy.h"

int main(void)
{
	Beverage *beverage1 = new Espresso();
	printf("%s $%4.2f\n", beverage1->getDescription().c_str(), beverage1->cost());
	delete beverage1;

	Beverage *beverage2 = new DarkRoast();
	beverage2 = new Mocha(beverage2);
	beverage2 = new Mocha(beverage2);
	beverage2 = new Whip(beverage2);
	printf("%s $%4.2f\n", beverage2->getDescription().c_str(), beverage2->cost());
	delete beverage2;

	Beverage *beverage3 = new HouseBlend();
	beverage3 = new Soy(beverage3);
	beverage3 = new Mocha(beverage3);
	beverage3 = new Whip(beverage3);
	printf("%s $%4.2f\n", beverage3->getDescription().c_str(), beverage3->cost());
	delete beverage3;

	return 0;
}