#pragma once

class Menu;
class Iterator;
class Waitress
{
public:
	Waitress(Menu *pancakeHouseMenu, Menu *dinerMenu);
	~Waitress(void);

	void printMenu();
	
	void printMenu(Iterator *iter);
private:
	Menu *pancakeHouseMenu;
	Menu *dinerMenu;
};

