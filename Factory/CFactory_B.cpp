#include "stdafx.h"
#include "CFactory_B.h"
#include "CProduct_B.h"

CFactory_B::CFactory_B()
{
}


CFactory_B::~CFactory_B()
{
}

CBaseProduct* CFactory_B::create()
{
	CBaseProduct *p = NULL;
	p = new CProduct_B();
	return p;
}
