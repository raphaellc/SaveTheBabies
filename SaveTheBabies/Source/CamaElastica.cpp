#include "CamaElastica.h"



CamaElastica::CamaElastica()
{
}

CamaElastica::CamaElastica(string nome_sprite)
{
	CamaElastica::setSpriteSheet(nome_sprite);
}

CamaElastica::~CamaElastica()
{
}

void CamaElastica::desenhaGameObject()
{
	this->sprite_game_object.desenhar(this->x, this->y);
}

void CamaElastica::animaGameObject()
{
	this->sprite_game_object.avancarAnimacao();
}

void CamaElastica::setPosicaoGameObject(float pos_x, float pos_y)
{
	this->x = pos_x;
	this->y = pos_y;
}

void CamaElastica::setSpriteSheet(string nome_sprite)
{
	this->sprite_game_object.setSpriteSheet(nome_sprite);
}

void CamaElastica::mover(int direcao)
{
	if (direcao > 0)
		setPosicaoGameObject((this->x + 50), 500);
	else
		setPosicaoGameObject((this->x - 50), 500);
}

Sprite * CamaElastica::getSprite() {
	return &this->sprite_game_object;
}

float CamaElastica::getX() { return this->x; }
float CamaElastica::getY() {
	return this->y;
}

void CamaElastica::update()
{
	//@todo: Atualizar o que??
}

