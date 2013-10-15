#pragma once
#include "iterator.h"
class NullIterator : public Iterator
{
public:

	NullIterator(void)
	{
	}

	virtual ~NullIterator(void)
	{
	}

	virtual bool hasNext()
	{
		return false;
	}

	virtual void* next()
	{
		return nullptr;
	}

};

