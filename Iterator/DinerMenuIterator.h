#pragma once
#include <array>
#include "Iterator.h"
#include "MenuItem.h"

class DinerMenuIterator : public Iterator
{
public:

	enum { MAX_ITEMS=6 };

	DinerMenuIterator(std::array<MenuItem*, MAX_ITEMS> *items)
		: position(0)
	{
		this->items=items;
	}

	virtual ~DinerMenuIterator(void)
	{		
		for (auto item: *items)
		{
			delete item;
		}
		delete items;
	}

	virtual bool hasNext()
	{
		if ( position >= items->size() || items->at(position)==nullptr )
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
	std::array<MenuItem*, MAX_ITEMS> *items;
	std::size_t position;
};

