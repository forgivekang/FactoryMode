#pragma once
#include "CBaseFactory.h"
class CFactory_B :
	public CBaseFactory
{
public:
	CFactory_B();
	~CFactory_B();

	CBaseProduct* create();
};

