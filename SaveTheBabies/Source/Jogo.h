#pragma once
#include "libUnicornio.h"
#include "Bebe.h"
class Jogo
{
public:
	Jogo();
	~Jogo();
	Sprite building;
	Sprite building_floor;
	Sprite fire_back;
	Bebe bb;
	void inicializar();
	void finalizar();
	void executar();
	int getScore();
private:
	void gerenciarWave(int wave);
	void gerenciarScore();
	int score, wave;
};

