#pragma once
#include "CBaseProduct.h"

class CBaseFactory
{
public:
	CBaseFactory();
	~CBaseFactory();

	virtual CBaseProduct *create() = 0;
};

