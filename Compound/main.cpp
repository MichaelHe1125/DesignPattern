#include "DuckSimulator.h"
#include "CountingDuckFactory.h"

int main(void)
{
	DuckSimulator *simulator = new DuckSimulator();
	AbstractDuckFactory *duckFactory = new CountingDuckFactory();

	simulator->simulate(duckFactory);

	delete duckFactory;
	delete simulator;

	std::cin.get();

	return 0;
}