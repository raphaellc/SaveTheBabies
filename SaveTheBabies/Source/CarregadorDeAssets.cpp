#include "CarregadorDeAssets.h"
#include <Global.h>



CarregadorDeAssets::CarregadorDeAssets()
{
}


CarregadorDeAssets::~CarregadorDeAssets()
{
}

bool CarregadorDeAssets::carregarRecursos(std::fstream & f_arq_recursos)
{
	if (f_arq_recursos) {
		stringstream ss_str;
		char num_ass = f_arq_recursos.get();
		this->i_num_asstets = num_ass-'0';
		//gDebug.depurar("numAssets", num_ass);
		gDebug.depurar("numAssets", this->i_num_asstets);
	}
	return true;
}

void CarregadorDeAssets::defineStream(std::fstream & f_arq_recursos)
{
	//this->f_arquivo = f_arq_recursos;
}
