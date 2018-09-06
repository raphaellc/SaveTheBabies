#pragma once


class EstadoJogo
{
public:
	EstadoJogo();
	~EstadoJogo();
	void defineScore(int s);
	int obtemScore();
	void defineVida(int v);
	int obtemVida();
	void defineWave(int w);
	int obtemWave();
	
private:
	int score;
	int vidas;
	int wave;
};

