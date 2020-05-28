#pragma once
#include "IComando.h"
class ComandoMvDireita :
	public IComando
{
public:
	ComandoMvDireita();
	~ComandoMvDireita();

	void executa(GameObject* _go) override;
};

