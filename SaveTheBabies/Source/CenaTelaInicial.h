#pragma once
#include "ICenas.h"
#include "libUnicornio.h"
class CenaTelaInicial :
	public ICenas
{
public:
	CenaTelaInicial();
	CenaTelaInicial(string textoTI);
	~CenaTelaInicial();
	void desenhar() override;
	void input() override;
	void atualizar() override;
	ICenas* proxima() override;
	bool terminouCena() override;
	void defineProximaCena(ICenas* ic_cena) override;
private:
	Texto Apresentacao;
	ICenas * proximaCena;
	bool fimCena;
	Uint64 inicioTick;
};

