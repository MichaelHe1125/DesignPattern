#pragma once
class Iterator
{
public:

	Iterator(void) { }

	virtual ~Iterator(void) { }

	virtual bool hasNext()=0;
	virtual void* next()=0;
};

