#pragma once
#include "ICenas.h"
#include <vector>
#include "Botao.h"

class CenaMenuPrincipal :
	public ICenas
{
public:
	CenaMenuPrincipal();
	~CenaMenuPrincipal();

	void desenhar() override;
	void input() override;
	void atualizar() override;
	ICenas* proxima() override;
	bool terminouCena() override;
	void defineProximaCena(ICenas* ic_cena) override;
	void InsereBotao(Botao * bt);
private:
	std::vector<Botao *> botoes;
	ICenas * proximaCena;
	bool fimCena;
};

