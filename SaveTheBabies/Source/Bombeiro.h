#pragma once
#include "GameObject.h"
class Bombeiro :
	public GameObject
{
public:
	Bombeiro();
	~Bombeiro();
	void desenhaGameObject() override;
	void animaGameObject() override;
	void setPosicaoGameObject(float pos_x, float pos_y) override;
	void setSpriteSheet(string nome_sprite) override;
	void mover(int direcao) override;
	Sprite * getSprite() override;
	float getX() override;
	float getY() override;
	void update() override;
};

