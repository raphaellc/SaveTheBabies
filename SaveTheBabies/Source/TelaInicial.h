#pragma once
#include "ICenas.h"
#include "libUnicornio.h"
class CenaTelaInicial :
	public ICenas
{
public:
	CenaTelaInicial();
	~CenaTelaInicial();
	void desenhar() override;
	void input() override;
	void atualizar() override;
	ICenas* proxima() override;
	bool terminouCena() override;
private:
	Texto Apresentacao;
};

