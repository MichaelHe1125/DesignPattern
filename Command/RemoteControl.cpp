#include "RemoteControl.h"
#include "NoCommand.h"

RemoteControl::RemoteControl(void)
{
	for (int i = 0; i < 7; i++)
	{
		onCommands[i] = new NoCommand;
		offCommands[i] = new NoCommand;
	}
}

RemoteControl::~RemoteControl(void)
{
	for (int i = 0; i < 7; i++)
	{
		delete onCommands[i];
		delete offCommands[i];
	}
}

void RemoteControl::setCommand( int slot, Command *onCmd, Command *offCmd )
{
	//delete
	if (onCommands[slot] != onCmd)
	{
		delete onCommands[slot];
	}
	if (offCommands[slot] != offCmd)
	{
		delete offCommands[slot];
	}

	onCommands[slot] = onCmd;
	offCommands[slot] = offCmd;
}

std::string RemoteControl::toString()
{
	std::string disp;
	disp.append("\n------ Remote Control -------\n");
	for (int i = 0; i < 7; i++)
	{
		disp.append("[slot "+std::to_string(i)+"] " +
			typeid(*onCommands[i]).name() + "   " + 
			typeid(*offCommands[i]).name() + "\n");
		
	}
	return disp;
}