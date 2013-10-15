#include "DinerMenu.h"
#include "PancakeHouseMenu.h"
#include "Waitress.h"

int main()
{
	Menu * pancakeHouseMenu = new PancakeHouseMenu();
	DinerMenu *dinerMenu = new DinerMenu();
	Waitress *waitress = new Waitress(pancakeHouseMenu, dinerMenu);

	waitress->printMenu();

	delete waitress;
	return 0;
}