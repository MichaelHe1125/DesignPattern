#pragma once
#include "kindwomen.h"
class WangPo : public KindWomen
{
public:

	WangPo(KindWomen * kindWomen)
	{
		this->kindWomen = kindWomen;
	}

	~WangPo(void)
	{
		delete kindWomen;
	}

	void makeEyesWithMan()
	{
		kindWomen->makeEyesWithMan();
	}

	void happyWithMan()
	{
		kindWomen->happyWithMan();
	}

private: 
	KindWomen * kindWomen;
};

