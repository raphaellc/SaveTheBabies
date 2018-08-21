#pragma once
#include "libUnicornio.h"
class GameObject
{
public:
	virtual void desenhaGameObject() = 0;
	virtual void animaGameObject() = 0;
	virtual void setPosicaoGameObject(float pos_x, float pos_y) = 0;
	virtual void setSpriteSheet(string nome_sprite) = 0;
	virtual void mover(int direcao) = 0;
protected:
	float x = 0.0f, y = 0.0f, velocidade = 0.0f;
	Sprite sprite_game_object;
};