#pragma once
#include "IComando.h"
#include "libUnicornio.h"
class GerenteInput
{
public:
	GerenteInput();
	~GerenteInput();
	IComando * gerenciaInput();
private:
	IComando * moveDireita;
	IComando * moveEsquerda;

};

