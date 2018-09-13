#pragma once
#include "GameObject.h"

class CamaElastica : public GameObject
{
public:
	CamaElastica();
	CamaElastica(string nome_sprite);
	~CamaElastica();
	void desenhaGameObject() override;
	void animaGameObject() override;
	void setPosicaoGameObject(float pos_x, float pos_y) override;
	void setSpriteSheet(string nome_sprite) override;
	void mover(int direcao) override;
	Sprite getSprite() override;
	float getX() override;
	float getY() override;
};

