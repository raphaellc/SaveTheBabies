#include "Bebe.h"



Bebe::Bebe()
{
}


Bebe::~Bebe()
{
}

void Bebe::setPosicaoGameObject(float x, float y)
{
	this->x = x;
	this->y = y;
}

void Bebe::setSpriteSheet(string sprite_sheet)
{
	sprite_game_object.setSpriteSheet(sprite_sheet);
}

void Bebe::animaGameObject()
{
	sprite_game_object.avancarAnimacao();
}

void Bebe::desenhaGameObject()
{
	sprite_game_object.desenhar(x, y);
}

void Bebe::mover(int direcao)
{
	x += velocidade;
	y += velocidade;
	sprite_game_object.setAnimacao(0);
}

void Bebe::setVelociadade(float vel)
{
	this->velocidade = vel;
}
