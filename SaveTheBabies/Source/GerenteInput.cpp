#include "GerenteInput.h"



GerenteInput::GerenteInput()
{
}


GerenteInput::~GerenteInput()
{
}

IComando * GerenteInput::gerenciaInput()
{
	if (gTeclado.pressionou[TECLA_DIR]) {
		return this->moveDireita;
	}
	if (gTeclado.pressionou[TECLA_ESQ]) {
		return this->moveEsquerda;
	}
}
