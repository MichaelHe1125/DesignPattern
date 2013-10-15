#include <vld.h>
#include "Singleton.h"
int main(int argc, char* argv[])
{
	Singleton *s = Singleton::getInstance();
	Singleton::releaseInstance();
	return 0;
}