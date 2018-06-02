#pragma once
#include "CAbstractFactory.h"
class CFactoryProductB :
	public CAbstractFactory
{
public:
	CFactoryProductB();
	~CFactoryProductB();

	CBaseProductA* createProductA();
	CBaseProductB* createProductB();
};

