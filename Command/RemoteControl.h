#pragma once
#include <string>
#include "Command.h"

class RemoteControl
{
public:
	RemoteControl(void);
	~RemoteControl(void);

	void setCommand(int slot, Command *onCmd, Command *offCmd);
	
	std::string toString();
	
	void onButtonWasPushed(int slot)
	{
		onCommands[slot]->execute();
	}

	void offButtonWasPushed(int slot)
	{
		offCommands[slot]->execute();
	}

private:
	Command *onCommands[7];
	Command *offCommands[7];
};

