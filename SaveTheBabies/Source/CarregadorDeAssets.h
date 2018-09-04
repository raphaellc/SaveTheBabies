#pragma once
//formato dos recursos
//<nome_recurso> <tipo_recurso> <caminho_recurso>
#include <fstream>
#include <iostream>
#include <sstream>
class CarregadorDeAssets
{
public:
	CarregadorDeAssets();
	~CarregadorDeAssets();
	bool  carregarRecursos(std::fstream & f_arq_recursos);
	void defineStream(std::fstream & f_arq_recursos );
private:
	std::fstream * f_arquivo;
	int i_num_asstets;
};

