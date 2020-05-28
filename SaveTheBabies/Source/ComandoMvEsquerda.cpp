#include "ComandoMvEsquerda.h"



ComandoMvEsquerda::ComandoMvEsquerda()
{
}


ComandoMvEsquerda::~ComandoMvEsquerda()
{
}

void ComandoMvEsquerda::executa(GameObject * _go)
{
	_go->mover(-1);
}
