#pragma once
#include "GameObject.h"

class IComando
{
public:
	IComando();
	~IComando();
	virtual void executa(GameObject * _go) = 0;
};

