#pragma once
#include "CBaseProductA.h"
#include "CBaseProductB.h"
class CAbstractFactory
{
public:
	CAbstractFactory();
	~CAbstractFactory();

	virtual CBaseProductA* createProductA() = 0;
	virtual CBaseProductB* createProductB() = 0;
};

