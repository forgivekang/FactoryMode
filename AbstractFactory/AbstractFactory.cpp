// AbstractFactory.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "CBaseProductA.h"
#include "CBaseProductB.h"
#include "CAbstractFactory.h"
#include "CFactoryProductA.h"
#include "CFactoryProductB.h"

int main()
{
	CAbstractFactory *p = new CFactoryProductA();
	CBaseProductA *pA = p->createProductA();
	CBaseProductB *pB = p->createProductB();
	pA->output();
	pB->output();
	delete pA;
	pA = NULL;
	delete pB;
	pB = NULL;
	delete p;
	p = NULL;

	p = new CFactoryProductB();
	pA = p->createProductA();
	pB = p->createProductB();
	pA->output();
	pB->output();
	delete pA;
	pA = NULL;
	delete pB;
	pB = NULL;
	delete p;
	p = NULL;

	system("pause");
    return 0;
}

