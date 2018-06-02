#include "stdafx.h"
#include "CFactory.h"
#include "CProductA.h"
#include "CProductB.h"

CFactory::CFactory()
{
}


CFactory::~CFactory()
{
}

CBase *CFactory::create(int type)
{
	CBase *tmp = NULL;
	switch (type)
	{
	case 1:
		tmp = new CProductA();
		break;
	case 2:
		tmp = new CProductB();
		break;
	default:
		break;
	}

	return tmp;
}
