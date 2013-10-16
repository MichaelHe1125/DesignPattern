#include "WangPo.h"
#include "PanJinLian.h"
#include "JiaShi.h"

using std::cout;
using std::endl;

void doPanJinLia()
{
    // 西门庆想找潘金莲，让王婆来安排。
	WangPo *wp=new WangPo(new PanJinLian);
	wp->makeEyesWithMan();
	wp->happyWithMan();
	delete wp;
}

void doJiaShi()
{
	// 西门庆想找贾氏，让王婆来安排。
	WangPo *wp=new WangPo(new JiaShi);
	wp->makeEyesWithMan();
	wp->happyWithMan();
	delete wp;
}

int main(void)
{
	doPanJinLia();
	doJiaShi();

	std::cin.get();
	return 0;
}