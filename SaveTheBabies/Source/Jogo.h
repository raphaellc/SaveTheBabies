#pragma once
#include "libUnicornio.h"

class Jogo
{
public:
	Jogo();
	~Jogo();
	Sprite sp;
	void inicializar();
	void finalizar();

	void executar();
};

