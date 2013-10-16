#pragma once
#include <iostream>
#include "kindwomen.h"

class PanJinLian : public KindWomen
{
public:

	PanJinLian(void) { }

	~PanJinLian(void) { }

	void makeEyesWithMan()
	{
		std::cout << "  潘金莲抛媚眼  " << std::endl;
	}

	void happyWithMan()
	{
		std::cout << " 潘金莲和男人做那个... ... " << std::endl;
	}


};

