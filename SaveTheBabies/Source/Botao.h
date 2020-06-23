#pragma once
#include "ICenas.h"

class Botao
{
public:
	Botao();
	~Botao();
	bool quandoClicado();
	void defineCena(ICenas * cn);
	void desenhar();
	ICenas * obtemCena();
};

