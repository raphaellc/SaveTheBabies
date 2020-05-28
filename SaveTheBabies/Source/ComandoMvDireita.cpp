#include "ComandoMvDireita.h"



ComandoMvDireita::ComandoMvDireita()
{
}


ComandoMvDireita::~ComandoMvDireita()
{
}

void ComandoMvDireita::executa(GameObject * _go)
{
	_go->mover(1);
}
