#include "stdafx.h"
#include "CFactoryProductB.h"
#include "CProductA_2.h"
#include "CProductB_2.h"

CFactoryProductB::CFactoryProductB()
{
}


CFactoryProductB::~CFactoryProductB()
{
}

CBaseProductA* CFactoryProductB::createProductA()
{
	CBaseProductA *tmp = NULL;
	tmp = new CProductA_2();
	return tmp;
}

CBaseProductB* CFactoryProductB::createProductB()
{
	CBaseProductB *tmp = NULL;
	tmp = new CProductB_2();
	return tmp;
}