#pragma once
#include "libUnicornio.h"
#include "Bebe.h"
#include "CamaElastica.h"
#include "CarregadorDeAssets.h"
#include "Bombeiro.h"
//#include <fstream>
#include <iostream>
#include "ISerializavel.h"
#include "EstadoJogo.h"
#include "SpawnerFor.cpp"
#include <queue>



class Jogo : public ISerializavel
{
public:
	Jogo();
	~Jogo();
	Sprite building;
	Sprite building_floor;
	Sprite fire_back;
	Bebe * bb;
	CamaElastica * cama_elastica;
	Bombeiro * bombeiro_esq, * bombeiro_dir;
	SpawnerFor<Bebe> * bbSpawner = new SpawnerFor<Bebe>;
	queue<Bebe*> * filaBebes = new queue<Bebe*>;
	void inicializar();
	void finalizar();
	void executar();
	int getScore();
	bool gravar(std::ostream& os) const override;
	bool carregar(std::istream & is) override;
private:
	void gerenciarWave(int wave);
	void gerenciarScore();
	int score;
	int wave;
	int vida;
	fstream f_stream;
	ofstream of_stream;
	ifstream if_stream;

};

