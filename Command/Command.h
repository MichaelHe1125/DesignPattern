#pragma once
class Command
{
public:

	virtual ~Command(void) { }

	virtual void execute()=0;
};

