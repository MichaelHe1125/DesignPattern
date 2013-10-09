#include <iostream>
//#include "vld.h"
#include "RemoteControl.h"
#include "Light.h"
#include "LightOnCommand.h"
#include "LightOffCommand.h"

int main()
{
	RemoteControl *remoteControl = new RemoteControl();
	
	Light *livingRoomLight = new Light("Living Room");
	Light *kitchenLight = new Light("Kitchen");
	
	LightOnCommand *livingRoomLightOn = 
		new LightOnCommand(livingRoomLight);
	LightOffCommand *livingRoomLightOff = 
		new LightOffCommand(livingRoomLight);
	LightOnCommand *kitchenLightOn = 
		new LightOnCommand(kitchenLight);
	LightOffCommand *kitchenLightOff = 
		new LightOffCommand(kitchenLight);

	remoteControl->setCommand(0, livingRoomLightOn, livingRoomLightOff);
	remoteControl->setCommand(1, kitchenLightOn, kitchenLightOff);

	remoteControl->onButtonWasPushed(0);
	remoteControl->offButtonWasPushed(0);

	std::cout<<remoteControl->toString()<<std::endl;

	remoteControl->onButtonWasPushed(1);
	remoteControl->offButtonWasPushed(1);

	delete kitchenLight;
	delete livingRoomLight;
	delete remoteControl;

	std::cin.get();
	return 0;
}