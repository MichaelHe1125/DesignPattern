#pragma once
class DisplayElement
{
public:
	DisplayElement(void) { }
	virtual ~DisplayElement(void) { }

	virtual void display()=0;
};

