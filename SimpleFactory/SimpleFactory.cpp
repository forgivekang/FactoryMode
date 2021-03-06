// SimpleFactory.cpp: 定义控制台应用程序的入口点。
//




#include "stdafx.h"
#include "CFactory.h"

int main()
{
	CFactory *factory = new CFactory();
	CBase *base = factory->create(1);
	base->output();
	delete base;
	base = NULL;

	base = factory->create(2);
	base->output();
	delete base;
	base = NULL;

	delete factory;
	factory = NULL;

	system("pause");
    return 0;
}

