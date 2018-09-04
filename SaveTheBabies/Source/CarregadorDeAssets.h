#pragma once
//formato dos recursos
//<tipo_recurso> <nome_recurso> <caminho_recurso> [<num_animacoes> <num_max_frames>]
#include <fstream>
#include <iostream>

class CarregadorDeAssets
{
public:
	CarregadorDeAssets();
	~CarregadorDeAssets();
	bool  carregarRecursos(std::fstream & f_arq_recursos);
	
private:
	int i_num_assets;
};

