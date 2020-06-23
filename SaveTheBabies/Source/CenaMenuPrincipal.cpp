#include "CenaMenuPrincipal.h"



CenaMenuPrincipal::CenaMenuPrincipal()
{

}


CenaMenuPrincipal::~CenaMenuPrincipal()
{
}

void CenaMenuPrincipal::desenhar()
{
}

void CenaMenuPrincipal::input()
{
}

void CenaMenuPrincipal::atualizar()
{
	for (Botao* botao : botoes)
	{
		if(!fimCena)
			if(botao->quandoClicado())
			{
				defineProximaCena(botao->obtemCena());
				fimCena = true;
			}
	}
	
}

ICenas* CenaMenuPrincipal::proxima()
{
	return nullptr;
}

bool CenaMenuPrincipal::terminouCena()
{
}

void CenaMenuPrincipal::defineProximaCena(ICenas* ic_cena)
{
}

void CenaMenuPrincipal::InsereBotao(Botao* bt)
{
	this->botoes.push_back(bt);
}
