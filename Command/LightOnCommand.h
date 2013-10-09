#pragma once
#include "command.h"
#include "Light.h"

class LightOnCommand : public Command
{
public:

	LightOnCommand(Light *light)
	{
		this->light = light;
	}

	virtual ~LightOnCommand(void)
	{
	}

	virtual void execute()
	{
		light->on();
	}

private:
	Light *light;
};
