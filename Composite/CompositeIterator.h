#pragma once

#include <string>
#include <stack>
#include <typeinfo>
#include "menu.h" 
#include "iterator.h"

class Menu;

class CompositeIterator : public Iterator
{
public:

	CompositeIterator(Iterator *iterator)
	{
		stackIters=new std::stack<Iterator*>;
		stackIters->push(iterator);
	}

	virtual ~CompositeIterator(void)
	{
		while (!stackIters->empty())
		{
			Iterator *iterator=stackIters->top();
			delete iterator;
			stackIters->pop();
		}
		delete stackIters;
		stackIters=nullptr;
	}

	virtual bool hasNext()
	{
		if (stackIters->empty())
		{
			return false;
		} 
		else
		{
			Iterator *iter=stackIters->top();
			if (!iter->hasNext())
			{
				stackIters->pop();
				delete iter;
				return hasNext();
			} 
			else
			{
				return true;
			}
		}
	}

	virtual void* next()
	{
		if (hasNext())
		{
			Iterator *iter=stackIters->top();
			MenuComponent *compo = (MenuComponent*)iter->next();
			
			if ( typeid(*compo) == typeid(Menu) )
			{
				stackIters->push(compo->createIterator());
			}

			return compo;
		} 
		else
		{
			return nullptr;
		}
	}

private:
	std::stack<Iterator*> *stackIters;
};

