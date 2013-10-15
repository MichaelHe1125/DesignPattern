#pragma once
#include <vector>
#include "Iterator.h"
#include "MenuItem.h"

class PancakeHouseMenuIterator : public Iterator
{
public:

	PancakeHouseMenuIterator(std::vector<MenuItem*> *items)
		: position(0)
	{
		this->items = items;
	}

	virtual ~PancakeHouseMenuIterator(void)
	{
		for (auto item: *items)
		{
			delete item;
		}
		delete items;
	}

	virtual bool hasNext()
	{
		if (position >= items->size())
		{
			return false;
		}
		else
		{
			return true;
		}
	}

	virtual void* next()
	{
		MenuItem * menuItem = items->at(position);
		position++;
		return (void*)menuItem;
	}

private:
	std::vector<MenuItem*> *items;
	std::size_t position;
};

