#pragma once
#include "libUnicornio.h"
#include "Bebe.h"
#include "CamaElastica.h"
class Jogo
{
public:
	Jogo();
	~Jogo();
	Sprite building;
	Sprite building_floor;
	Sprite fire_back;
	Bebe bb;
	CamaElastica cama_elastica;
	void inicializar();
	void finalizar();
	void executar();
	int getScore();
private:
	void gerenciarWave(int wave);
	void gerenciarScore();
	int score, wave;
};

