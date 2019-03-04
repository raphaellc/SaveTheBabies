#include "Bombeiro.h"



Bombeiro::Bombeiro()
{
}


Bombeiro::~Bombeiro()
{
}

void Bombeiro::desenhaGameObject()
{
	this->sprite_game_object.desenhar(this->x, this->y);
}

void Bombeiro::animaGameObject()
{
	this->sprite_game_object.avancarAnimacao();
}

void Bombeiro::setPosicaoGameObject(float pos_x, float pos_y)
{
	this->x = pos_x;
	this->y = pos_y;
}

void Bombeiro::setSpriteSheet(string nome_sprite)
{
	this->sprite_game_object.setSpriteSheet(nome_sprite);
}

void Bombeiro::mover(int direcao)
{
	if (direcao > 0)
		setPosicaoGameObject((this->x + 50), 500);
	else
		setPosicaoGameObject((this->x - 50), 500);
}

Sprite Bombeiro::getSprite()
{
	return this->sprite_game_object;
}

float Bombeiro::getX()
{
	return this->x;
}

float Bombeiro::getY()
{
	return this->y;
}

