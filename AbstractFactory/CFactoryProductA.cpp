#include "stdafx.h"
#include "CFactoryProductA.h"
#include "CProductA_1.h"
#include "CProductB_1.h"

CFactoryProductA::CFactoryProductA()
{
}


CFactoryProductA::~CFactoryProductA()
{
}


CBaseProductA* CFactoryProductA::createProductA()
{
	CBaseProductA *tmp = NULL;
	tmp = new CProductA_1();
	return tmp;
}

CBaseProductB* CFactoryProductA::createProductB()
{
	CBaseProductB *tmp = NULL;
	tmp = new CProductB_1();
	return tmp;
}
