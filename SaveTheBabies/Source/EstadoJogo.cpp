#include "EstadoJogo.h"



EstadoJogo::EstadoJogo()
{
}


EstadoJogo::~EstadoJogo()
{
}

void EstadoJogo::defineScore(int s){
	this->score = s;
}

int EstadoJogo::obtemScore(){
	return this->score;
}

void EstadoJogo::defineVida(int v){
	this->vidas = v;
}

int EstadoJogo::obtemVida(){
	return this->vidas;
}

void EstadoJogo::defineWave(int w){
	this->wave = w;
}

int EstadoJogo::obtemWave(){
	return this->wave;
}
