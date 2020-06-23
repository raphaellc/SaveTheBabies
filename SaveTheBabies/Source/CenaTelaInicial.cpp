#include "CenaTelaInicial.h"



CenaTelaInicial::CenaTelaInicial()
{
	fimCena = false;
	Apresentacao.adicionarString("TelaInicial");
	inicioTick = gTempo.getTicks();
}

CenaTelaInicial::CenaTelaInicial(string textoTI)
{
	fimCena = false;
	Apresentacao.adicionarString(textoTI);
	inicioTick = gTempo.getTicks();
}


CenaTelaInicial::~CenaTelaInicial()
{
}

void CenaTelaInicial::desenhar()
{
	Apresentacao.desenhar(gJanela.getLargura() / 2, gJanela.getAltura() / 2);
}

void CenaTelaInicial::input()
{
}

void CenaTelaInicial::atualizar()
{
	double intervalo = gTempo.getTempoEntreTicks(inicioTick,gTempo.getTicks());
	if(intervalo > 1.0)
	{
		fimCena = true;
	}
}

ICenas* CenaTelaInicial::proxima()
{
	return proximaCena;
}

bool CenaTelaInicial::terminouCena()
{
	return fimCena;
}
