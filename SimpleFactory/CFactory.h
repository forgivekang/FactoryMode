#pragma once
#include "CBase.h"
class CFactory
{
public:
	CFactory();
	~CFactory();

	CBase *create(int type);
};

