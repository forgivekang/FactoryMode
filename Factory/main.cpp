// Factory.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "CBaseFactory.h"
#include "CProduct_A.h"
#include "CProduct_B.h"
#include "CFactory_A.h"
#include "CFactory_B.h"
int main()
{
	CBaseFactory *factory = new CFactory_A();
	CBaseProduct *product = factory->create();
	product->output();
	delete product;
	product = NULL;
	delete factory;
	factory = NULL;

	factory = new CFactory_B();
	product = factory->create();
	product->output();
	delete product;
	product = NULL;
	delete factory;
	factory = NULL;

	system("pause");
    return 0;
}

