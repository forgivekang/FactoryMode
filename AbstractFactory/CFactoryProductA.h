#pragma once
#include "CAbstractFactory.h"
class CFactoryProductA :
	public CAbstractFactory
{
public:
	CFactoryProductA();
	~CFactoryProductA();

	CBaseProductA* createProductA();
	CBaseProductB* createProductB();
};

