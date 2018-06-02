#include "stdafx.h"
#include "CFactory_A.h"
#include "CProduct_A.h"

CFactory_A::CFactory_A()
{
}


CFactory_A::~CFactory_A()
{
}

CBaseProduct* CFactory_A::create()
{
	CBaseProduct *p = NULL;
	p = new CProduct_A();
	return p;
}
