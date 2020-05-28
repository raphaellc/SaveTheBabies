#pragma once
#include "IComando.h"
class ComandoMvEsquerda :
	public IComando
{
public:
	ComandoMvEsquerda();
	~ComandoMvEsquerda();
	void executa(GameObject* _go) override;
};

