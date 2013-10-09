#pragma once
#include "command.h"
#include "Light.h"

class LightOffCommand : public Command
{
public:

	LightOffCommand(Light *light)
	{
		this->light = light;
	}

	virtual ~LightOffCommand(void)
	{
	}

	virtual void execute()
	{
		light->off();
	}

private:
	Light *light;
};
