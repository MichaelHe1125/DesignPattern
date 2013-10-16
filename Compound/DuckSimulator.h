#pragma once

class Quackable;
class AbstractDuckFactory;

class DuckSimulator
{
public:
	DuckSimulator(void);
	~DuckSimulator(void);

	void simulate(AbstractDuckFactory *duckFactory);
	void simulate(Quackable *duck);
};

