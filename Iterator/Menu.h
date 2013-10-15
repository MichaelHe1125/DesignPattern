#pragma once
class Iterator;
class Menu
{
public:

	Menu(void) { }

	virtual ~Menu(void) { }

	virtual Iterator* createIterator() = 0;
};
