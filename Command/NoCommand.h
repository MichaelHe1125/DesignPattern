#pragma once
#include "command.h"
class NoCommand : public Command
{
public:

	NoCommand(void)
	{
	}

	virtual ~NoCommand(void)
	{
	}

	virtual void execute()
	{		
	}

};

