#pragma once
#include "CBaseFactory.h"
class CFactory_A :
	public CBaseFactory
{
public:
	CFactory_A();
	~CFactory_A();

	CBaseProduct* create();
};

